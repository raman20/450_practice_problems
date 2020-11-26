#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s.shrink_to_fit();
    int max{1};
    int count{0};
    int s_index{0},e_index{0};
    for(int i = 1; i < s.size()-1; i++)
    {
        count = 0;
        if(s[i-1] == s[i+1])
        {
            int j{i-1},k{i+1};
            count = 1;
            while(j >=0 && k < s.size())
            {
                if(s[j] != s[k])
                {
                    break;
                }
                count+=2;
                j--;
                k++;
            }
            if(max < count)
            {
                max = count; 
                s_index = j+1; 
                e_index = k-1;
            }
        }
        else if(s[i]==s[i+1])
        {
            int j{i-1},k{i+2};
            count = 2;
            while(j >=0 && k < s.size())
            {
                if(s[j] != s[k])
                {
                    break;
                }
                count+=2;
                j--;
                k++;
            }
            if(max < count)
            {
                max = count; 
                s_index = j+1; 
                e_index = k-1;
            }
        }
    }
    
    for(int i = s_index; i <= e_index; i++)
    {
        cout << s[i];
    }
    cout << " -> "<<max << endl;

    return 0;
}
