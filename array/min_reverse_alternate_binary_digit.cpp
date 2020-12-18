#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
//////////////////////////////////////
    int size{0},one_count{0},o_count{0},z_count{0};
    cin >> size;
    int bin_arr[size];
//////////////////////////////////////

//////////////////////////////////////
    for(int i{0};i < size; ++i)
    {
        cin >> bin_arr[i];
    }
//////////////////////////////////////

//////////////////////////////////////
    for(int i = 0; i < size-1; i++)
    {
        if(!bin_arr[i] && !bin_arr[i+1])
        {   
            z_count++;
        }
        else if(bin_arr[i] && bin_arr[i+1])
        {
            o_count++;
        }
    }
    int res{0};
    if(o_count%2 == 0)
    {
    	res += o_count/2;
    }
    else
    {
    	res += o_count;
    }
    if(z_count%2 == 0)
    {
    	res += z_count/2;
    }
    else
    {
    	res += z_count;
    }
    cout<<res<<endl;
//////////////////////////////////////

    return 0;
}
