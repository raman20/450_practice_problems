#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {5,6,2,1,2,3};
	int count{0};

	for(int i=0; i<sizeof(arr)/sizeof(arr[0]) - 1; i++)
	{
		for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]); j++)
		{
			if(arr[i]>arr[j])
			{
				count++;
			}
		}
	}

	cout << count;

	return 0;
}
