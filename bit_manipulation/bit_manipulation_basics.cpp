#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
	return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos)
{
	return (n | (1<<pos));
}

int clearBit(int n, int pos)
{
	 int mask{1<<pos};
	 return (n & ~mask);
}

int updateBit(int n, int pos, int bit)
{
	 int mask = clearBit(n,pos);
	 return (mask | (bit<<pos));
}

int main()
{
	cout << updateBit(5,1,1);
	return 0;
}
