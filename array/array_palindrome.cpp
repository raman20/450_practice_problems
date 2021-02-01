//min merge operation to convert an array palindrome.

#include <bits/stdc++.h>
using namespace std;

int min_merge_ops(int arr[], int size)
{
    int ans{0};
    int i = 0;
    int j = size-1;
    while(i <= j)
    {
        if(arr[i] == arr[j])
        {
            i++;
            j--;
        }

        else if(arr[i] > arr[j])
        {
            j--;
            arr[j] += arr[j+1];
            ans++;
        }

        else
        {
            i++;
            arr[i]+=arr[i-1];
            ans++;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1,4,4,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout << min_merge_ops(arr, size);

    return 0;
}
