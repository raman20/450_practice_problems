#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int arr[size];
	int result{0};
	int r_max{0}, l_max{0};
    int lo{0},hi{size-1};
	for(int i{0}; i < size; i++)
	{
		cin >> arr[i];
	}

	while(lo <= hi)
	{
        if(arr[lo] < arr[hi])
        {
		    if(arr[lo] > l_max)
		    {
			    l_max = arr[lo];
		    }
		    else
		    {
			    result += l_max - arr[lo];
		    }
            lo++;
        }
        else
        {
            if(arr[hi] > r_max)
            {
                r_max = arr[hi];
            }
            else
            {
                result += r_max - arr[hi];
            }
            hi--;
        }
	}
	cout << result << endl;
	return 0;
}
