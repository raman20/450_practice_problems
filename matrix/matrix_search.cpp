#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int l, int r, int x)
{
	if(r>=l)
	{
		int mid = l+(r-l)/2;
		if(arr[mid] == x)
		{
			return 1;
		}
		if(arr[mid]>x)
		{
			return binary_search(arr,l,mid-1,x);
		}
		return binary_search(arr,mid+1,r,x);
	}
	return 0;
}

int main()
{
	///////declaration///////////////
	int size;
	cin >> size;
	int arr[size][size];
	int item;
	cin >> item;
	/////////////////////////////////
	
	//////////////array input//////////////
	for(int i = 0; i<size; i++)
	{
		for(int j = 0; j<size; j++)
		{
			cin >> arr[i][j];
		}
	}
	/////////////////////////////////
	
	///////////solution//////////////
	for(int i = 0; i<size; i++)
	{
		if(binary_search(*(arr+i), 0, 2, item))
		{
			cout << "found" << endl;
			break;
		}
	}
	/////////////////////////////////
	return 0;
}
