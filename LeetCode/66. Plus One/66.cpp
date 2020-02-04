class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        digits[digits.size()-1]++;

        for(int i = digits.size()-1; i>=0; --i)
        {
            if(digits[i] == 10)
            {
                digits[i] = 0;

                if(i==0)
                {
                    vector<int>::iterator it;
                    it = digits.begin();
                    digits.insert(it, 1);
                }
                else
                {
                    digits[i-1]++;
                }
            }
            else
                break;
        }

        return digits;
    }
};
