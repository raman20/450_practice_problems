// in this code we have to sort a array of 0,1,2 only without any sorting algo

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int size{0};
	cin >> size;
	int arr[size];
	int _1{0},_0{0},_2{0};
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		if(arr[i] == 0)
		{
			_0++;
		}
		else if(arr[i]==1)
		{
			_1++;
		}
		else
		{
			_2++;
		}
	}

	int index(0);
	while(_0)
	{
		arr[index] = 0;
		index++;
		_0--;
	}
	while(_1)
	{
		arr[index] = 1;
		index++;
		_1--;
	}
	while(_2)
	{
		arr[index] = 2;
		index++;
		_2--;
	}

	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}
