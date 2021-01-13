#include <bits/stdc++.h>
using namespace std;

void substring(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    

    substring(ip.substr(1,ip.length()-2), op);
    substring(ip.substr(1,ip.length()-2), op+ip[0]);

}

int main()
{
    string s;
    cin >> s;
    
    substring(s, "");
    cout << endl;
    return 0;
}
