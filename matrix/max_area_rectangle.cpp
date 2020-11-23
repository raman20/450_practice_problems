#include <bits/stdc++.h>
using namespace std;

//////////max_area function/////////////
int max_area(int arr[],int size)
{
    int max{0};
    int count;
    for(int i = 0; i < size; i++)
    {
      if(arr[i]>0)
      {
        count = arr[i];
        for(int j = i-1; j >= 0; j--)
        {
            if(arr[j] < arr[i])
            {
                break;
            }
            count+=arr[i];
        }

        for(int k = i+1; k < size; k++)
        {
            if(arr[k] < arr[i])
            {
                break;
            }
            count+=arr[i];
        }
        max = std::max(max, count);
      }
    }

    return max;
}
////////////////////////////////////////

int main()
{
	///////////declaration//////////
	int row,col;
	cin >> row >> col;
	int arr[row][col];
	int max{0};
	///////////////////////////////
	
	//////////input////////////////
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cin >> arr[i][j];
		}
	}
	///////////////////////////////
	
	//////////solution/////////////
	for(int i = 1; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if(arr[i][j] > 0)
			{
				arr[i][j] += arr[i-1][j];
			}
		}
	}

	for(int i = 0; i < row; i++)
	{
		max = std::max(max, max_area(arr[i], col));
	}
	cout << max << endl;
	///////////////////////////////

	return 0;
}
