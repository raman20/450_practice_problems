#include <bits/stdc++.h>
using namespace std;

int fib(int n, int memo[])
{
    if (n == 1 || n == 2)
    {
        memo[n - 1] = 1;
        return memo[n - 1];
    }

    if (memo[n - 1])
    {
        return memo[n - 1];
    }

    memo[n - 1] = fib(n - 1, memo) + fib(n - 2, memo);

    return memo[n - 1];
}

int main()
{
    int n{10};
    int memo[n] = {0};
    cout << fib(n, memo) << endl;

    return 0;
}
