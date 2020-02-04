class Solution
{
public:
    int reverse(int x)
    {
        int sum=0;

        do
        {
            sum += x % 10;
            x /= 10;

            if(x!=0)
            {
                if(sum>=214748365 || sum<=-214748365)
                {
                    return 0;
                }
                sum *= 10;
            }
        }while(x!=0);

        return sum;
    }
};
