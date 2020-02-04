class Solution
{
public:
    int maximum69Number (int num)
    {
        int digit = 1000;

        while(digit != 0)
        {
            if((num / digit) % 10 == 6)
            {
                num += 3 * digit;
                break;
            }

            digit /= 10;
        }

        return num;
    }
};
