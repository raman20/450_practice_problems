#include <bits/stdc++.h>
using namespace std;

int main()
{
	int stock[] = {7,1,5,3,6,4};
	int size{sizeof(stock)/sizeof(stock[0])};
	int min_price{stock[0]};
	int i=1;
	int index;
	while(i<size)
	{
		if(min_price > stock[i])
		{
			min_price = stock[i];
			index = i;
		}
		i++;
	}
	int max_price{stock[index]};
	for(int j = index+1; j<size; j++)
	{
		if(max_price < stock[j])
		{
			max_price = stock[j];
		}
	}
	cout << max_price - min_price;
	return 0;
}
