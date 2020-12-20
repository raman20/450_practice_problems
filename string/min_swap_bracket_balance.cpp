#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int st{0}; 
    int end(s.length()-1);
    int swap{0};
    
    while(st < end)
    {
        if(s[st] == '[' && s[end] == ']')
        {
            st++;
            end--;
        }
        else if(s[st] == s[end])
        {
            if(s[st] == '[')
            {
                st++;
            }
            else if(s[end] == ']')
            {
                end--;
            }
        }
        else
        {
            swap++;
            st++;
            end--;
        }
    }

    cout << swap << endl;
    return 0;
}
