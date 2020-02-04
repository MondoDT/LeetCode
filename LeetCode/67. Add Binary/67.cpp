class Solution
{
public:
    string addBinary(string a, string b)
    {
        int indexA = a.size() - 1, indexB = b.size() - 1, carry = 0;
        string result;
        char bitTmp = '0';

        while(1)
        {
            bitTmp = a[indexA] + b[indexB] + carry;

            switch(bitTmp)
            {
            case '0' + '0':
                result.insert(0, "0");
                carry = 0;
                break;
            case '0' + '1':
                result.insert(0, "1");
                carry = 0;
                break;
            case '1' + '1':
                result.insert(0, "0");
                carry = 1;
                break;
            case '1' + '1' + 1:
                result.insert(0, "1");
                carry = 1;
                break;
            default:
                cout << "error" << endl;
            }

            --indexA;
            --indexB;

            if(indexA == -1 && indexB == -1)
                break;
            if(indexA == -1)
            {
                indexA = 0;
                a[0] = '0';
            }
            if(indexB == -1)
            {
                indexB = 0;
                b[0] = '0';
            }
        }

        if(carry == 1)
        {
            result.insert(0, "1");
        }

        return result;
    }
};
