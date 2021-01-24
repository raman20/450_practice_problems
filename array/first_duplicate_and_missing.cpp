#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,1,3,5,3,2};

    for(int i{0};i < sizeof(arr)/sizeof(arr[0]); ++i)
    {
        if(arr[arr[i]-1] < 0)
        {
            cout << "first repeating -> " << abs(arr[i]) << endl;
            break;
        }
        else
        {
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }
    }


    for(int i{0}; i < sizeof(arr)/sizeof(arr[0]); ++i )
    {
        if(arr[i] > 0)
        {
            cout << "missing -> " << arr[i]-1 << endl;
            break;
        }
    }

    return 0;
}
