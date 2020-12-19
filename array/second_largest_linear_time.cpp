#include <bits/stdc++.h>
using namespace std;

int second_largest(int arr[], int size)
{
    int max{arr[0]},sec_max{0};

    for(int i{1}; i < size; ++i)
    {
        if(arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i] > sec_max)
        {
                sec_max = arr[i];
        }       
    }

    return sec_max;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for(int i=0; i < size; ++i)
    {
        cin >> arr[i];
    }

    cout << second_largest(arr,size);

    return 0;
}