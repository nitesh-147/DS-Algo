// Recursive approach to find gcd of two number
// Euclidean Algorithm

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    cout << "Enter two positive integer: ";
    int a, b;
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " = " << gcd(a, b);
}