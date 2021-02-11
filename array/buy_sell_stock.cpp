#include <bits/stdc++.h>
using namespace std;

int main()
{
	int stock[] = {10,22,80,75,65,5};
	int size{sizeof(stock)/sizeof(stock[0])};
	int min_price{stock[0]}, max_price{stock[0]};
	int i=0;
	int minIndex,maxIndex;
	
    while(i < size)
	{
		if(min_price > stock[i])
		{
			min_price = stock[i];
			minIndex = i;
		}
        if(max_price < stock[i])
        {
            max_price = stock[i];
            maxIndex = i;
        }
		i++;
	}

	if(minIndex < maxIndex)
    {
        cout << stock[maxIndex] - stock[minIndex] << endl;
    }

    else
    {
        maxIndex = max_index(stock,minIndex);
        cout << stock[maxIndex] - stock[minIndex] << endl;
    }

	cout << max_price - min_price;
	return 0;
}
