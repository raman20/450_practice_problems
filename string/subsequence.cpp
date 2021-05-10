#include <bits/stdc++.h>
using namespace std;

void subsequence(string ip, string op)
{
    if(ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    

    subsequence(ip.substr(1,ip.length()-1), op);
    subsequence(ip.substr(1,ip.length()-1), op+ip[0]);

}

int main()
{
    string s;
    cin >> s;
    
    subsequence(s, "");
    cout << endl;
    return 0;
}
