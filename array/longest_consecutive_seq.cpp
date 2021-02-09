#include <bits/stdc++.h>
using namespace std;

int main()
{
    //------------test-input-----------
    int arr[] = {2,6,1,9,4,5,3};
    //---------------------------------
    
    int size = sizeof(arr)/sizeof(arr[0]);
    std::set<int> temp;
    int count{1};
    int res{1};

    for(int i{0}; i < size; ++i)
    {
        temp.insert(arr[i]);
    }
    

    auto i = temp.begin();
    int next;
    int cur;

    for(int j{0}; j < temp.size()-1; j++)
    {
        i++;
        next = *i;
        i--;
        cur = *i;
        if(next - cur == 1)
        {
            count++; 
        }

        else
        {
            res = std::max(count,res);
            count = 0;
        }

        i++;
    }

    cout << res << endl;
    
    return 0;
}
