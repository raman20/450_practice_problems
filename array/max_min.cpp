#include <bits/stdc++.h>

using namespace std;

int max_elem(int arr[],int size)
{
	int max{arr[0]};

	for(int i = 1; i < size; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}

int min_elem(int arr[],int size)
{
	int min{arr[0]};

	for(int i = 1; i < size; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
}

void array_input(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}


int main()
{

	int size{0};
	cin >> size;
	int arr[size];

	array_input(arr,size);

	cout << "max => "<< max_elem(arr,size) << endl;
	cout << "min => "<< min_elem(arr,size) << endl;

	return 0;
}

