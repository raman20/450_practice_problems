#include <bits/stdc++.h>
using namespace std;

int main()
{
	////////////declartion/////////
	int row, col;
	cin >> row >> col;
	int arr[row][col];
	int max{0};
	int row_index;
	///////////////////////////////

	////////////input//////////////
	for(int i=0;i<row;i++)
	{
		for(int j = 0; j<col; j++)
		{
			cin >> arr[i][j];
		}
	}
	///////////////////////////////
	
	////////////solution///////////
	int count{0};
	for(int i = 0; i<row; i++)
	{
		count = 0;	
		for(int j = 0; j<col; j++)
		{
			if(arr[i][j])
			{
				count++;
			}
		}
		if(max < count)
		{
			max = count;
			row_index = i;
		}
	}
	cout << row_index << endl;
	///////////////////////////////
	
	return 0;
}
