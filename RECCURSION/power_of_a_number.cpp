// Reccursive approach to find power of a number.

#include <bits/stdc++.h>
using namespace std;

int power(int base, int exp)
{
    if (exp == 0)
        return 1;

    return base * power(base, exp - 1);
}

int main()
{
    cout << "Enter base: ";
    int base;
    cin >> base;
    cout << "Enter exponent: ";
    int exp;
    cin >> exp;

    cout << base << "^" << exp << " = " << power(base, exp) << endl;
}