#include <bits/stdc++.h>
using namespace std;

void remove_adj(string s)
{
    if(!s.length())
    {
        return;
    }

    else if(s[0] != s[1])
    {
        cout << s[0];
        remove_adj(s.substr(1,s.length()-1));
    }
     else
    {
     remove_adj(s.substr(1,s.length()-1)); 
    }
}

int main()
{
    string s;
    cin >> s;
    remove_adj(s);
    
    return 0;
}
