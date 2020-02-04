class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int sum=0, maxSum=nums[0];

        for(vector<int>::iterator it=nums.begin(); it!=nums.end(); ++it)
        {
            sum += *it;

            if(sum > maxSum)
                maxSum = sum;
            if(sum < 0)
                sum = 0;
        }

        return maxSum;
    }
};
