#include <bits/stdc++.h>
using namespace std;

void rotate(int* arr,int s, int e)
{
	int last{arr[e]};

	for(int i = e; i>s; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[s] = last;
}

int main()
{
	int size;
	cin >> size;
	int arr[size];
	
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for(int i=0; i<size; i++)
	{
		if(i%2 != 0 && arr[i]>=0)
		{
			int j = i+1;
			while(j<size)
			{
				if(arr[j] < 0)
				{
					rotate(arr,i,j);
					break;
				}
				else
				{
					j++;
				}
			}
		}
		else if(i%2==0 && arr[i]<0)
		{
			int j = i+1;
			while(j<size)
			{
				if(arr[j]>=0)
				{
					rotate(arr,i,j);
					break;
				}
				else
				{
					j++;
				}
			}
		}
	}

	for(int i=0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
