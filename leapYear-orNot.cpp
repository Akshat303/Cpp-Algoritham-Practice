#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cout << "Enter the number of year ";
    cin >> y;
    while (y > 0)
    {
        int n;
        cout << "Enter the number of year ";
        cin >> n;
        if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
            cout << "Yes";
        else
            cout << "No";
        cout << "\n";
        y--;
    }
    return 0;
}