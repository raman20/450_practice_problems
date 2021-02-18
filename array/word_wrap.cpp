#include<bits/stdc++.h>
using namespace std;

int main()
{
    //----------test-input-------
    int arr[] = {2,2,3,5};
    int k{6};
    //---------------------------

    int n = sizeof(arr)/sizeof(arr[0]);
    int temp{k-arr[0]};
    cout << arr[0];

    for(int i{1}; i < n; ++i)
    {
        if(arr[i] <= temp - 1)
        {
            cout << " " << arr[i];
            temp = temp - arr[i];
        }
        else
        {
            cout << "\n" <<arr[i];
            temp = temp - arr[i];
        }

    }

    

    return 0;
}
