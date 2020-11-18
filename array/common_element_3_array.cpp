#include <bits/stdc++.h>
using namespace std;

std::pair<int*,int> common(int* arr1, int* arr2, int s1, int s2)
{
	int i{0},j{0},k{0};
	int arr3[s1+s2];

	while(i < s1 && j < s2)
	{
		if(arr1[i] == arr2[j])
		{
			arr3[k] = arr1[i];
			i++;
			j++;
			k++;
		}
		else if(arr1[i] < arr2[j])
		{
			i++;
		}
		else if(arr1[i] > arr2[j])
		{
			j++;
		}
	}
	return {arr3,k};
}

int main()
{
	//test arrays
	int a1[] = {1,5,10,20,40,80};
	int a2[] = {6,7,20,80,100};
	int a3[] = {3,4,15,20,30,70,80,120};
	std::pair<int*,int> result;
		
	result = common(a1,a2,sizeof(a1)/sizeof(a1[0]),sizeof(a2)/sizeof(a2[0]));
	result = common(a3,result.first,sizeof(a3)/sizeof(a3[0]),sizeof(result.first)/sizeof(result.first[0]));

	for(int i=0;i<=result.second;i++)
	{	
		cout << result.first[i] << " ";
	}
	
	return 0;
}
