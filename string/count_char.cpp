#include <iostream>
using namespace std;

int main() {
	string s = "raman";
	int a[26] = {0};
	int pos;
	for(int i{0}; i < s.length(); i++)
	{
	    pos = s[i] - 'a';
	    a[pos]++;
	}
	
	pos = 'a';
	for(int i{0}; i < 26; i++)
	{
	    cout << (char)pos << " - " << a[i] << endl;
	    pos++;
	}
	return 0;
}

