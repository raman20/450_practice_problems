#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {-4,-6,1,4,-7,2,-5,-7,4};
	int max{arr[0]};
	int sum{0};
	//kadane algo
	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
		sum += arr[i];
		if(max < sum && sum > 0)
		{
			max = sum;
		}
		else
		{
			sum = 0;
		}

	}

	cout << max;

	return 0;
}
