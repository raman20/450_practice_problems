#include <bits/stdc++.h>
using namespace std;

static int flag = 1;

bool tripletSum(int arr[], int n, int k)
{  
    if(n >= 3 && flag)
    {
        for(int i{1}; i < n-1; i++)
        {
            if(arr[0]+arr[n-1]+arr[i] == k)
            {
                flag = 0;
                return 1;
            }
        }

        return max(tripletSum(arr+1,n-1,k),tripletSum(arr,n-1,k));
    }

    return 0;
}

int main()
{   
    //-----------test-input------------
    int arr[] = {1,2,4,3,6};
    int m{10};
    int n = sizeof(arr)/sizeof(arr[0]);
    //---------------------------------
        
    cout << tripletSum(arr,n,m) << endl;

    /*for(int i{0}; i < n; i++)
    {
        for(int j{i+1}; j < n; j++)
        {
            for(int k{j+1}; k < n; k++)
            if(arr[i]+arr[j]+arr[k] == m)
            {
                cout << "YES\n";
            }
        }
    }*/

    return 0;
}
