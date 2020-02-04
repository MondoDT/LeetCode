class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int length=0;

        if(nums.size() == 0)
            return 0;
        else if(nums.size() == 1)
            return 1;

        length = length + 2;

        for(vector<int>::iterator it=nums.begin()+2; it!=nums.end();)
        {
            if(*it == *(it-1) && *it == *(it-2))
            {
                nums.erase(it);
            }
            else
            {
                ++length;
                ++it;
            }


        }

        return length;
    }
};
