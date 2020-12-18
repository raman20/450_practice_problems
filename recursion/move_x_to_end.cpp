#include <bits/stdc++.h>
using namespace std;

void move_x(string s)
{
    if(s.length() == 0)
    {
        return;
    }
    if(s[0]!='x')
    {
        cout << s[0];
        move_x(s.substr(1));
    }
    else if(s[0] == 'x')
    {
        move_x(s.substr(1));
        cout << 'x';
    }
}

int main()
{
    string s;
    cin >> s;
    move_x(s);
    return 0;
}
