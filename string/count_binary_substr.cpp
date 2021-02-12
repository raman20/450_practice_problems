//count binary substr having equal 0s and 1s.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int zero{0},one{0}, count{0};

    for(int i{0}; i < s.size(); i++)
    {
        if(s[i] == '0')
        {
            zero++;
        }
        else if(s[i] == '1')
        {
            one++;
        }
        if(zero == one)
        {
            count++;
            zero = 0;
            one = 0;
        }

    }

    cout << count << endl;

    return 0;
}
