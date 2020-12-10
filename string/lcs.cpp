#include <bits/stdc++.h>
using namespace std;

int lcs(string str1, int size1, string str2, int size2)
{
    if(size1 > 0 && size2 > 0)
    {
        if(str1[size1-1] == str2[size2-1])
        {
            return 1 + lcs(str1,size1-1,str2,size2-1);
        }
        else
        {
        
            return std::max(lcs(str1,size1-1,str2,size2),lcs(str1,size1,str2,size2-1));
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
    string s1,s2;
    cin >> s1;
    cin >> s2;
    s1.shrink_to_fit();
    s2.shrink_to_fit();
    cout << lcs(s1,s1.size(),s2,s2.size());
    return 0;
}
