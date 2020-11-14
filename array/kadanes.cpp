#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {12,4,-4,6,-6,10,-11};
	int max{arr[0]};
	int sum{0};
	//kadane algo
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		sum += arr[i];
		
		max = std::max(max,sum);
		if(sum < 0)
		{
			sum = 0;
		}

	}

	cout << max;

	return 0;
}
