#include <bits/stdc++.h>

using namespace std;

int main()
{
	int size;
	cin >> size;
	cin.ignore();
	char s[size+1];
	cin.getline(s,size);
	cin.ignore();
	int max_len{0};
	int count{0};
	int i{0};
	while(true)
	{
		if(s[i] == ' ' || s[i] == '\0')
		{
			if(count > max_len)
			{
				max_len = count;
			}
			count = 0;
		}
		else
		{
			count++;
		}
		if(s[i]=='\0')
		{
			break;
		}
		i++;
	}
	cout << max_len << endl;
	return 0;
}
