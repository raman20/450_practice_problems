#include <bits/stdc++.h>
using namespace std;

int lrs(string str1, int size1, string str2, int size2)
{
    if(size1 > 0 && size2 > 0)
    {
        if(str1[size1-1] == str2[size2-1] && (size1-1) != (size2-1))
        {
            return 1 + lrs(str1,size1-1,str2,size2-1);
        }
        else
        {
        
            return std::max(lrs(str1,size1-1,str2,size2),lrs(str1,size1,str2,size2-1));
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

int main()
{
    string s1;
    cin >> s1;
    cout << lrs(s1,s1.size(),s1,s1.size());
    return 0;
}
