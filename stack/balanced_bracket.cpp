#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    stack<char> S;
    cin >> str;
    str.shrink_to_fit();

    if(str[0]=='}' && S.empty())
    {
        cout << "not balanced\n";
        return 0;
    }
    
    for (int i(0); i < str.size(); i++)
    {
        if (str[i] == '}')
        {
            if (S.top())
            {
                S.pop();
            }
            else
            {
                cout << "not balanced\n";
                break;
            }
        }
        else if (str[i] == '{')
        {
            S.push(str[i]);
        }
    }

if (S.size())
{
    cout << "not balanced\n";
}
else
{
    cout << "balanced\n";
}

return 0;
}
