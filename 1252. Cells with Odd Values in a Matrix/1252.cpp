class Solution
{
public:
    int oddCells(int n, int m, vector< vector<int> >& indices)
    {
        vector< vector<int> > arr(n, vector<int> (m));
        int counter = 0;

        for(int i = 0; i < indices.size(); ++i)
        {
            for(int j = 0; j < arr[0].size(); ++j)
            {
                ++arr[indices[i][0]][j];
            }

            for(int j = 0; j < arr.size(); ++j)
            {
                ++arr[j][indices[i][1]];
            }
        }

        for(int i = 0; i < arr.size(); ++i)
        {
            for(int j = 0; j < arr[0].size(); ++j)
            {
                if(arr[i][j] % 2 == 1)
                {
                    ++counter;
                }
                //cout << arr[i][j] << " ";
            }
            //cout << endl;
        }

        return counter;
    }
};
