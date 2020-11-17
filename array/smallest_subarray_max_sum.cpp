#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int f{-1}, r{-1};
    int arr[100];
    int size{100};
    void push(int item)
    {
        if (r == size - 1)
        {
            return;
        }
        r++;
        arr[r] = item;
        if (f == -1)
        {
            f = 0;
        }
    }
    void pop()
    {
        if (f == -1)
        {
            return;
        }
        if (f == r)
        {
            f = r = -1;
        }
        else
        {
            f++;
        }
    }

    int sum()
    {
        int total{0};
        if (f == -1)
        {
            return 0;
        }
        for (int i = f; i <= r; i++)
        {
            total = total + arr[i];
        }
        return total;
    }
    
    int q_size()
    {
        return r-f;
    }
};

int main()
{
    int arr[] = {3,1,6,3,7,10};
    int k{9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int len;
    Queue q;
    int i{0};
    int first{1};
    while (i < size)
    {
        int sum = q.sum();
        if(sum <= k)
        {
            q.push(arr[i]);
            i++;
        }
        else
        {
            if(first)
            {
                len = q.q_size();
                first--;
            }
            else
            {
                len = std::min(q.q_size(),len);
            }
            
            q.pop();
        }
    }
    cout << len;
    return 0;
}