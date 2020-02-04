class Solution
{
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        vector<vector<int> > table(1, vector<int> (2));

        table[0][0] = arr[0];
        ++table[0][1];

        for(vector<int>::iterator it = arr.begin() + 1; it != arr.end(); ++it)
        {
            for(int i = 0; i < table.size(); ++i)
            {
                if(*it == table[i][0])
                {
                    ++table[i][1];
                    break;
                }
                else if(i == table.size()-1)
                {
                    table.push_back(vector<int> (2));
                    table[table.size()-1][0] = *it;
                    ++table[table.size()-1][1];
                    break;
                }
            }
        }

        //check table
        /*for(int i = 0; i < table.size(); ++i)
        {
            for(int j = 0; j < table[0].size(); ++j)
            {
                cout << table[i][j] << " ";
            }
            cout << endl;
        }*/

        for(int i = 0; i < table.size(); ++i)
        {
            for(int j = i + 1; j < table.size(); ++j)
            {
                if(table[i][1] == table[j][1])
                {
                    return false;
                }
            }
        }

        return true;
    }
};
