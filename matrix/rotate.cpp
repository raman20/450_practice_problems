#include <bits/stdc++.h>
using namespace std;

int main()
{
	/////////declaration////////
	int size;
	cin >> size;
	int arr[size][size];
	////////////////////////////
	
	/////////input//////////////
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			cin >> arr[i][j];
		}
	}
	////////////////////////////
	
	////////solution////////////
	for(int i = 0; i < size; i++)
	{
		for(int j = size-1; j >= 0; j--)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	////////////////////////////
	return 0;
}
