#include <bits/stdc++.h>

using namespace std;

void tower_of_hanoi(int n,char src,char dest,char aux)
{
    if(n==0)
    {
        return;
    }
    tower_of_hanoi(n-1,src,aux,dest);
    cout << src << " -> " << dest << endl;
    tower_of_hanoi(n-1,aux,dest,src);
}

int main()
{
    int n;
    cin >> n;
    tower_of_hanoi(n,'A','B','C');
    return 0;
}
