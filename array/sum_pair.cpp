#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {2,7,11,15};
	int sum = 9;
	int count{0};
	
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++)
		{
			if(arr[i]+arr[j] == sum)
			{
				count++;
			}
		}
	}

	cout << count;

	return 0;
}
