#include <bits/stdc++.h>
using namespace std;

string CountSay(int n)
{
    string res{""};
    
    if(n == 0)
    {
        return res;
    }

    res = "1";
    int i{0}, count{0};
    string temp{""};
   
    while(n > 1)
    {
        count=1;
        i=0;
        temp="";
        while(true)
        {
            if(i < res.length())
            {
                if(res[i] == res[i+1])
                {
                    count++;
                }
                else
                {
                    temp+=std::to_string(count);
                    temp+=res[i];
                    count=1;
                }
            }
            else
            {
                break;
            }
            i++;
        }
        res = temp;
        n--;
    }
    
    return res;
}

int main()
{
    int n;
    cin >> n;

    cout << CountSay(n) << endl;

    return 0;
}
