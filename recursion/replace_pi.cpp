#include <bits/stdc++.h>
using namespace std;

void replace_pi(string s)
{
    if(!s.length())
    {
        return;
    }
    else if(s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replace_pi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replace_pi(s.substr(1));
    }
}

int main()
{
    string s;
    cin >> s;
    replace_pi(s);
    return 0;
}
