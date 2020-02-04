class Solution
{
public:
    bool isValid(string s)
    {
        string index;

        for(int i = 0; i < s.size(); i++)
        {
            switch(s[i])
            {
                case '(':
                    index.push_back('(');
                    break;
                case ')':
                    if(index[index.size() - 1] == '(' && index.size() != 0)
                    {
                        index.erase(index.size() - 1, 1);
                    }
                    else
                    {
                        return false;
                    }
                    break;
                case '{':
                    index.push_back('{');
                    break;
                case '}':
                    if(index[index.size() - 1] == '{' && index.size() != 0)
                    {
                        index.erase(index.size() - 1, 1);
                    }
                    else
                    {
                        return false;
                    }
                    break;
                case '[':
                    index.push_back('[');
                    break;
                case ']':
                    if(index[index.size() - 1] == '[' && index.size() != 0)
                    {
                        index.erase(index.size() - 1, 1);
                    }
                    else
                    {
                        return false;
                    }
                    break;

                default:
                    break;
            }
        }

        if(index.size() == 0)
            return true;
        else
            return false;
    }
};
