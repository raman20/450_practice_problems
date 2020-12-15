#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;

    //s1.shrink_to_fit();

    for(int i{0}; i < s1.size(); ++i)
    {
      cout << s1[i] << endl;
      for(int m{0};m < s1.size()-i-1;++m){
        for(int j{0}; j < s1.size()-i-1; ++j)
        {
            cout << s1[i];
            for(int k{i+1+m}; k <= i+1+j; ++k)
            {
                cout << s1[k];
            }
            cout << endl;
        }
      }
    }
    cout << endl;
    return 0;
}
