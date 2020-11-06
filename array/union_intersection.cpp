#include <bits/stdc++.h>

using namespace std;

int arr_union(int arr1[], int arr2[])
{
	cout << "union of arr1 and arr2 => ";
	int size_1 = sizeof(arr1)/sizeof(arr1[0]);
	int size_2 = sizeof(arr2)/sizeof(arr2[0]);
	int i{0},j{0};
	for(;i<size_1,j<size_2;)
	{
		if(arr1[i] == arr2[j])
		{
			cout << arr1[i] << " ";
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			cout << arr1[i] << " ";
			i++;
		}
		else if(arr2[j]<arr1[i])
		{
			cout << arr2[j] << " ";
			j++;
		}
	}

	while(i<size_1)
	{
		cout << arr1[i]<<" ";
		i++;	
	}
	while(j < size_2)
	{
		cout << arr2[j]<<" ";
		j++;
	}

	cout << endl;
	return 0;
}

int arr_intersection(int arr1[],int arr2[])
{
	cout << "union of arr1 and arr2 => ";
	int i{0},j{0};
	int size_1 = sizeof(arr1)/sizeof(arr1[0]);
	int size_2 = sizeof(arr2)/sizeof(arr2[0]);


	while(i < size_1 && j < size_2)
	{
		if(arr1[i] == arr2[j])
		{
			cout << arr1[i];
			i++;
			j++;
		}
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		if(arr2[i]>arr2[j])
		{
			j++;
		}
	}


	cout << endl;
	return 0;
}

int main()
{
	int arr1[] = {1,2,3,4,7,8,9};
	int arr2[] = {7,8,9,10};

	arr_union(arr1,arr2);
	arr_intersection(arr1,arr2);
	
	return 0;
}

