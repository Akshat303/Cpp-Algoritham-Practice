#include <iostream>
using namespace std;

int main()
{
    // int a = 10, b = 4, res; (pre define value)

    //user define value
    int a, b, res;
    cout << "enter the value of a and - ";
    cin >> a;
    cout << "enter the value of  b - ";
    cin >> b;

    // printing a and b
    cout << "a is " << a << " and b is " << b << "\n";

    // addition
    res = a + b;
    cout << "a+b is: " << res << "\n";

    // subtraction
    res = a - b;
    cout << "a-b is: " << res << "\n";

    // multiplication
    res = a * b;
    cout << "a*b is: " << res << "\n";

    // division
    res = a / b;
    cout << "a/b is: " << res << "\n";

    // modulus
    res = a % b;
    cout << "a%b is: " << res << "\n";

    return 0;
}