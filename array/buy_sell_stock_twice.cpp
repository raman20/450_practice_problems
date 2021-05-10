// O(N^2) solution.

#include <bits/stdc++.h>
using namespace std;

pair<int,int> min_max(int arr[], int st, int end)
{

    int min, max, min_index, max_index;

    min = arr[st];
    min_index = st;

    for(int i{st}; i <= end; ++i)
    {
        if(min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
    }

    max = arr[st];
    max_index = st;
    for(int i{st}; i <= end; ++i)
    {
        if(max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }
    
    if(min_index < max_index)
    {
        return {min,max};
    }

    return {-1,-1};
}

int buy_sell_stock_twice(int arr[], int size)
{
    int res{0};
    int i{0}, k{size-1};
    int j{i+1};
    pair<int,int> temp;
    pair<int,int> temp2;

    while(j+1 < k)
    {
        temp = min_max(arr,i,j);
        temp2 = min_max(arr,j+1,k);
        if(temp.first == -1 || temp2.first == -1)
        {
            j++;
            continue;
        }
        res = std::max(res, (temp.second - temp.first) + (temp2.second - temp2.first));
        j++;
    }
    
    return res;
}

int main()
{
    //-------------input-data-------------------
    int stocks[] = {0,2,0,0,5};
    int size = sizeof(stocks)/sizeof(stocks[0]);
    //------------------------------------------

    cout << buy_sell_stock_twice(stocks,size) << endl;

    return 0;
}
