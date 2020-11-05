#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size{0};
	int k{0};
	cin >> size;
	cin >> k;
	int arr[size];
	for(int i=0; i<size; i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+size);
	if(k <= size)
	{
		cout<<arr[k-1];
	}
	return 0;
}
