#include <bits/stdc++.h>
using namespace std;

int check_arr(int arr[],int li)
{
    if(li == 0)
    {
        return 1;
    }

    else if(arr[li] < arr[li-1])
    {
        return 0;
    }

    return check_arr(arr,li-1);
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if(check_arr(arr,size-1))
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "not sorted" << endl;
    }
    return 0;
}
