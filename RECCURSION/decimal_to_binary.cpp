// Reccursive approach to find binary of a decimal no.

#include <bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n)
{
    if (n == 0 || n == 1)
        return n;

    return n % 2 + 10 * decimal_to_binary(n / 2);
}

int main()
{
    cout << "Enter a positive integer : ";
    int n;
    cin >> n;

    cout << "The binary value of " << n
         << " = " << decimal_to_binary(n);
}

