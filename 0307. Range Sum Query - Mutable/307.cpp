class NumArray
{
public:
    NumArray(vector<int>& nums)
    {
        arr = nums.begin();
    }

    void update(int i, int val)
    {
        arr[i] = val;
    }

    int sumRange(int i, int j)
    {
        int sum=0;

        for(; i<=j; ++i)
        {
            sum += arr[i];
        }

        return sum;
    }

private:
    vector<int>::iterator arr;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
