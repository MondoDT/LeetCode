// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution
{
public:
    int guessNumber(int n)
    {
        int left = 1, right = n, target;

        while(1)
        {
            target = left + (right - left) / 2;

            if(guess(target) == 0)
                return target;
            else if(guess(target) == 1)
                left = target + 1;
            else
                right = target - 1;
        }
    }
};
