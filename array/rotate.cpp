// in this code we have to cyclicaly rotate a array by 1
#include <bits/stdc++.h>

using namespace std;

void rotate_array(int arr[], int size)
{
	int i{size-1};
	int last{arr[size-1]};
	
	for(;i>0;i--)
	{
		arr[i] = arr[i-1];
	}	

	arr[0] = last;
}

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	rotate_array(arr,size);

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}
