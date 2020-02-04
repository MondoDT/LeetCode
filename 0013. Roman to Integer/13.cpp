class Solution
{
public:
    int romanToInt(string s)
    {
        int sum=0;

        for(int i=s.length()-1; i>=0; i--)
        {
            if(s[i]=='I')
            {
                if((s[i+1]=='X' || s[i+1]=='V') && i!=s.length()-1)
                {
                    sum -= 1;
                }
                else
                {
                    sum += 1;
                }
            }
            else if(s[i]=='V')
            {
                sum += 5;
            }
            else if(s[i]=='X')
            {
                if((s[i+1]=='C' || s[i+1]=='L') && i!=s.length()-1)
                {
                    sum -= 10;
                }
                else
                {
                    sum += 10;
                }
            }
            else if(s[i]=='L')
            {
                sum += 50;
            }
            else if(s[i]=='C')
            {
                if((s[i+1]=='M' || s[i+1]=='D') && i!=s.length()-1)
                {
                    sum -= 100;
                }
                else
                {
                    sum += 100;
                }
            }
            else if(s[i]=='D')
            {
                sum += 500;
            }
            else if(s[i]=='M')
            {
                sum += 1000;
            }
        }

        return sum;
    }
};
