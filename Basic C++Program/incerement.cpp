#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 4, res;

    // post-increment example:
    // res is assigned 10 only, a is not updated yet
    res = a++;
    // a becomes 11 now
    cout << "a is " << a << " and res is " << res << "\n";

    // post-decrement example:
    // res is assigned 11 only, a is not updated yet
    res = a--;
    // a becomes 10 now
    cout << "a is " << a << " and res is " << res << "\n";

    // pre-increment example:
    // res is assigned 11 now since a is updated here itself
    res = ++a;
    // a and res have same values = 11
    cout << "a is " << a << " and res is " << res << "\n";

    // pre-decrement example:
    // res is assigned 10 only since a is updated here itself
    res = --a;
    // a and res have same values = 10
    cout << "a is " << a << " and res is " << res << "\n";

    return 0;
}