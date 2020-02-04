// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int lower = 1, upper = n, target;

        while(lower != upper)
        {
            target = lower + (upper - lower) / 2;

            if(isBadVersion(target) == false)
            {
                lower = target + 1;
            }
            else
            {
                upper = target;
            }
        }

        return lower;
    }
};
