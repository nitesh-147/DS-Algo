// Reccursive approach to find sum of digit of a number.

#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sum_of_digits(n / 10);
}

int main()
{
    cout << "Enter a positive Integer:  ";
    int n;
    cin >> n;
    cout << "\n\n The sum of digits of " << n << " = " << sum_of_digits(n) << endl;
}