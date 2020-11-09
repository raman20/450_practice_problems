#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int arr[size] = {0};
	int temp;
	for(int i=0;i<size;i++)
	{
		cin >> temp;
		if(temp >=1 && temp <= size-1)
		{
			arr[temp]+=1;
		}
	}

	for(int i=0;i<size;i++)
	{
		if(arr[i]>1)
		{
			cout << i;
			break;
		}
	}
	return 0;
}
