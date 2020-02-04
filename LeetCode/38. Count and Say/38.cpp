class Solution
{
public:
    string process(string str)
    {
        string result = "1";
        int counter = 1;

        while(str[counter] != '\0')
        {
            if(str[counter] == str[counter-1])
            {
                ++result[result.size()-1];
            }
            else
            {
                result += str[counter-1];
                result += '1';
            }

            ++counter;
        }

        result += str[counter-1];

        return result;
    }

    string countAndSay(int n)
    {
        string result = "1";

        for(int i=0; i<n-1; ++i)
        {
            result = process(result);
        }

        return result;
    }
};
