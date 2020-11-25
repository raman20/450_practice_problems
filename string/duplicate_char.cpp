#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    s.shrink_to_fit();
    int a[256] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        a[(int)s[i]]++;
    }

    for(int i = 0; i < 256; i++)
    {
        if(a[i] > 1)
        {
            cout << (char)i <<" -> "<< a[i] << endl;
        }
    }

    return 0;
}
