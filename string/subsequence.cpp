#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    for(int curr{0}; curr < s.length(); ++curr)
    {
      for(int st{curr+1};st < s.length(); ++st)
      {
          cout << s[curr];

            for(int end{st}; end < s.length(); ++end)
            {
                for(int k{st}; k <= end; ++k)
                {
                    cout << s[k];
                }
                cout << endl;
            }
        }
    }
    cout << endl;
    return 0;
}
