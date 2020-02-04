class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int length=1;

        if(s.size()==0)
        {
            return 0;
        }

        for(int i=0; i<s.size()-1; i++)
        {
            for(int j=i+length; j<s.size(); j++)
            {
                if(checkPass(i, j, s)==true)
                {
                    if(j-i+1>length)
                    {
                        length = j-i+1;
                    }
                }
                else
                {
                    break;
                }
            }
        }

        return length;
    }

    bool checkPass(int s_start, int s_end, string str)
    {
        for(int i=s_start; i<s_end; i++)
        {
            for(int j=i+1; j<=s_end; j++)
            {
                if(str[i]==str[j])
                {
                    return false;
                }
                else if(i==s_end-1 && j==s_end)
                {
                    return true;
                }
            }
        }

        return false; //not used
    }
};
