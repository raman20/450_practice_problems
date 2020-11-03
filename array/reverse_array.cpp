#include <bits/stdc++.h>

using namespace std;

void input_array(int arr[], int size)
{
	for(int i = 0;i<size ;i++)
	{
		cin >> arr[i];
	}
}

void print_array(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void reverse_array(int arr[], int size)
{
	int start{0};
	int last{size};
	
	if(size%2 == 0)
	{
		for(start = 0, last = size-1; start<=((int)(size/2))-1, last>=(int)(size/2);start++,last--)
		{
			swap(arr[start],arr[last]);			
		}
	}
	else
	{
		for(start = 0, last = size-1; start<(int)(size/2),last>(int)(size/2);start++,last--)
		{
			swap(arr[start],arr[last]);
		}
	}

}

int main()
{
	int size{0};

	cout << "enter size"<< endl;
	cin >> size;
	
	int arr[size];
	
	input_array(arr,size);

	reverse_array(arr, size);

	print_array(arr,size);
	

	return 0;
}

