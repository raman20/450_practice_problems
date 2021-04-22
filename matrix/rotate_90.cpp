#include <bits/stdc++.h>
using namespace std;

int main()
{
    //-----------test_input-----------------
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //--------------------------------------
    
    for(int i{0}; i < 3; ++i)
    {
        for(int j{i}; j < 3; ++j)
        {
            std::swap(arr[i][j],arr[j][i]);
        }
    }
    
    for(int i{0}; i < n; ++i)
    {
        for(int j{0},k{n-1}; j < n/2; ++j,--k)
        {
            std::swap(a[j][i],a[k][i]);
        }
    }
    
    return 0;
}
