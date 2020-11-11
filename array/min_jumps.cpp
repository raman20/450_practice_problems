#include <bits/stdc++.h>

using namespace std;

int max(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	int arr[] = {1, 4, 3, 2, 6, 7};
	int max_reach{arr[0]};
	int jump{1};
	int step{arr[0]};
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 1; i < size; i++)
	{
		if (i == size - 1)
		{
			cout << jump;
			break;
		}

		max_reach = max(max_reach, i + arr[i]);
		step--;

		if (step == 0)
		{
			jump++;
			if (i >= max_reach)
			{
				return -1;
			}
			step = max_reach - i;
		}
	}

	return 0;
}
