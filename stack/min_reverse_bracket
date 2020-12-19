#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    string str;
    cin >> str;
    str.shrink_to_fit();

    int cls{0},opn{0};

    stack<char> s;
    
    if(str.size()%2 != 0)
    {
        cout << "not possible";
        return 0;
    }

    for(int i(0); i < str.size(); ++i)
    {
        if(str[i] == '}' && !s.empty())
        {
            s.pop();
        }
        else if(str[i] == '{')
        {
            s.push(str[i]);
        }
        else
        {
            cls++;
        }
    }

    opn += s.size();

    cout << ceil(opn/2)+ceil(cls/2)<< "\n";

    return 0;
}

