#include <bits/stdc++.h>
using namespace std;

void print_arr(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int size;
    cin >> size;
    
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    int change{0};
    for(int i = size-1; i>0; i--)
    {
        if(arr[i] > arr[i-1])
        {
            std::swap(arr[i],arr[i-1]);
            change++;
            break;
        }
    }


    if(change)
    {
        print_arr(arr,size);
    }    
    else
    {
        sort(arr,arr+size);
        print_arr(arr,size);
    }
    

    return 0;
}