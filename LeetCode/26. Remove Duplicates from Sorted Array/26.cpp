class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int length=0;

        if(nums.size() == 0)
            return 0;

        ++length;

        for(vector<int>::iterator it=nums.begin()+1; it!=nums.end();)
        {
            if(*it != *(it-1))
            {
                ++length;
                ++it;

            }
            else
            {
                nums.erase(it);
            }

        }

        return length;
    }
};
