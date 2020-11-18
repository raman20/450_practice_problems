#include <bits/stdc++.h>
using namespace std;

int main()
{
				int size;
				cin >> size;
				char a[size];
				cin >> a;
				bool check = 1;

				for(int i = 0; i<size; i++)
				{
								if(a[i]!=a[size-1-i])
								{
												check = 0;
												break;
								}
				}

				if(check == true)
				{
								cout << "palindrome" << "\n";
				}
				else
				{
								cout << "not a palindrome" << "\n";
				}

				return 0;
}
