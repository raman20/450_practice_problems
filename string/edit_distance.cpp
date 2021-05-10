#include <bits/stdc++.h>
using namespace std;

int min(int a, int b, int c)
{
    return std::min(std::min(a,b),c);
}

unordered_map<pair<string,string>,int> temp;

int editDistance(string s1, int s1_size, string s2, int s2_size)
{
    pair<string,string> p (s1,s2);

    if(temp.find(p))
    {
        return 0;
    }
    else
    {
        temp[p] = 1;
    }

    if (s1_size == 0)
    {
        return s2_size;
    }

    if(s2_size == 0)
    {
        return s1_size;
    }

    if (s1[s1_size] == s2[s2_size])
    {
        return editDistance(s1, s1_size - 1, s2, s2_size - 1);
    }

    return 1 + min(editDistance(s1, s1_size - 1, s2, s2_size), editDistance(s1, s1_size, s2, s2_size - 1), editDistance(s1, s1_size - 1, s2, s2_size - 1));
}

int main()
{
    string str1 = "saturday";
    string str2 = "sunday";
    cout << editDistance(str1, str1.size() - 1, str2, str2.size() - 1);
    return 0;
}
