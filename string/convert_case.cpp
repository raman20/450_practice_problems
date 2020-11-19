#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] >= 'a' && s[i]<= 'z' )
		{
			s[i] -= 32;
		}
	}	
	cout << "to upper-case " << s << endl;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i] >= 'A' && s[i]<= 'Z' )
		{
			s[i] += 32;
		}	
	}
	cout<< "to lower-case " << s << endl;

	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout << "transform to upper " << s << endl;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	cout << "transform to lower " << s << endl;

	return 0;
}
