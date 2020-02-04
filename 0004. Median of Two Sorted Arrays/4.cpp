class Solution
{
public:
    double returnMedian(vector<int>& nums)
    {
        if(nums.size()%2 == 0)
        {
            return (double)(nums[(nums.size()/2)-1] + nums[nums.size()/2]) / 2;
        }
        else
        {
            return (double)nums[nums.size()/2];
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>::iterator it1;
        it1 = nums1.begin();
        int n1Count = 0, n2Count = 0;

        if(nums1.size() == 0)
        {
            return returnMedian(nums2);
        }
        else if(nums2.size() == 0)
        {
            return returnMedian(nums1);
        }
        else
        {
            while(n2Count<nums2.size())
            {
                if(nums1.size()-1 == n1Count && nums1[n1Count] <= nums2[n2Count])
                {
                    nums1.push_back(nums2[n2Count]);
                    ++n1Count;
                    ++n2Count;
                }
                else if(nums1[n1Count] <= nums2[n2Count] && nums1[n1Count+1] >= nums2[n2Count])
                {
                    nums1.insert(it1+n1Count+1, nums2[n2Count]);
                    ++n1Count;
                    ++n2Count;
                    it1 = nums1.begin();
                }
                else if(nums1[n1Count] > nums2[n2Count])
                {
                    nums1.insert(it1+n1Count, nums2[n2Count]);
                    ++n2Count;
                    it1 = nums1.begin();
                }
                else
                {
                    ++n1Count;
                }
            }

            return returnMedian(nums1);
        }
    }
};
