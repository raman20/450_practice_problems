#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1 ,8 ,9 ,10 ,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;    
    std::sort(arr,arr+size);
    int ans = arr[size-1]-arr[0];
    int max,min;
    for(int i=1;i<size;i++)
    {
        max = std::max(arr[i]+k, arr[size-1] - k);
        min = std::min(arr[0]+k, arr[i+1] - k);
        ans = std::min(ans, max - min);
    }
    cout << ans;
    return 0;
}
