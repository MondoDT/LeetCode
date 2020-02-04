class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int counter = 0, startCount = 0;


        for(int i=s.size()-1; i>=0; --i)
        {
            if(s[i] != ' ')
            {
                startCount = 1;
            }

            if(startCount == 1)
            {
                if(s[i] == ' ')
                    break;

                ++counter;

                if(i == 0)
                    break;
            }
        }

        return counter;
    }
};
