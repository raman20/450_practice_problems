#include <bits/stdc++.h>
using namespace std;

static int flag = 1;

int arr_sum(int arr[],int n)
{
    int sum{0};

    for(int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }

    return sum;
}

bool zero_sum_subArray(int arr[],int n)
{
    if(n == 0 || flag == 0)
    {
        return false;
    }

    int sum = arr_sum(arr, n);

    if(sum == 0)
    {
        flag = 0;
        return true;
    }

    bool r1 = zero_sum_subArray(arr+1,n-1);
    bool r2 = zero_sum_subArray(arr,n-1);
    bool r3 = (r1||r2);

    return r3;
}

int main()
{
    int arr[] = {4,2,1,2,3,2,3,2,2,3,2,3,-1,1};
    if(zero_sum_subArray(arr,sizeof(arr)/sizeof(arr[0])))
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }

    return 0;
}
