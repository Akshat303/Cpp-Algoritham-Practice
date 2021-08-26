#include <bits/stdc++.h>
using namespace std;

int nonprime(int n)
{
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n, rem, s = 0;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        if (nonprime(rem))
        {
            s += rem;
        }
        n = n / 10;
    }
    cout << s;
    return 0;
}