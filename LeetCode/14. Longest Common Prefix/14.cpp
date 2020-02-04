class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if(strs.size() == 0)
        {
            return "";
        }

        string prefix = strs[0];

        for(int i = 1; i < strs.size(); ++i)
        {
            while(strs[i].compare(0, prefix.size(), prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.size() - 1);

                if(prefix.empty() == true)
                {
                    return "";
                }
            }
        }

        return prefix;
    }
};
