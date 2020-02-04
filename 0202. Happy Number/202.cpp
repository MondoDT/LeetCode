class Solution
{
public:
    int access(int num)
    {
        int sum=0;

        while(num>=10)
        {
            sum += (num%10) * (num%10);
            num = num/10;
        }

        sum += num * num;
        return sum;
    }

    bool isHappy(int n)
    {
        vector<int> table;
        table.push_back(n);

        while(n!=1)
        {
            n = access(n);
            if(find(table.begin(), table.end(), n) != table.end())
                return false;
            table.push_back(n);
        }

        return true;
    }
};
