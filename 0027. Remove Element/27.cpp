class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        vector<int>::iterator it = nums.begin();

        for(size_t i=0; i<nums.size();)
        {
            if(nums[i]==val)
            {
                nums.erase(it);
            }
            else
            {
                ++i;
                ++it;
            }
        }

        return nums.size();
    }
};
