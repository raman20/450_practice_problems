// in this code we have to shift all the -ve element to left/right of the array 

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {1,2,3,5,6,-1,-2,-3,-4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i{0};
	int j{size-1};

	while(i<=j)
	{
		if(arr[i]<0 && arr[j]<0)
		{
			i++;
		}
		else if(arr[i]>0 && arr[j]>0)
		{
			j--;
		}
		else if(arr[i]>0 && arr[j]<0)
		{
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
		else
		{
			i++;
			j--;
		}
	}

	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}

	cout << endl;



	return 0;
}
