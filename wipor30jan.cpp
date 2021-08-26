#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cout << "Enter how many times you want run this loop :- ";
    cin >> y;
    while (y > 0)
    {
        int n, d, rem, c = 0;
        cin >> n >> d;
        while (n > 0)
        {
            rem = n % 10;
            if (rem != d)
            {
                c++;
            }
            n = n / 10;
        }
        cout << c;
        y--;
    }
    return 0;
}