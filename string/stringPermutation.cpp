#include <bits/stdc++.h>

using namespace std;

void swap(char* x, char* y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char* a, int st, int end)
{
    if(st==end)
    {
        cout << a << "\n";
    }
    else
    {
        for(int i = st; i <= end; ++i)
        {
            swap((a+st), (a+i));
            permutation(a, st+1, end);
            swap((a+st), (a+i));
        }
    }
}

int main()
{
    char s[20];
    cin >> s;
    int n;
    cin >> n;
    permutation(s,0,n-1);
    return 0;
}
