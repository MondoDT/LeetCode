#include <algorithm>

class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        for(int i=m; i<m+n; i++)
        {
            nums1[i] = nums2[i-m];
        }

        vector<int>::iterator it = nums1.begin();
        sort(it, it+m+n);
    }
};
