#include <bits/stdc++.h>
using namespace std;

int swapCount(int arr[], int st, int end, int k)
{
    int count{0};

    for(int i{st}; i <= end; ++i)
    {
        if(arr[i]>k)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    //--------------test_input-------------------
    int arr[] = {2,7,5,4,9,8,1,3};
    int k = 6;
    //-------------------------------------------

    int window{0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res{INT_MAX};

    for(int i{0}; i < n; ++i)
    {
        if(arr[i] <= k)
        {
            window++;
        }
    }

    for(int i{0},j{window-1};j < n;j++,i++)
    {
        res = std::min(res, swapCount(arr,i,j,k));
    }

    cout << res << endl;

    return 0;
}
