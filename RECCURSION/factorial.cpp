// reccursive approach to find factorial of anumber

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    cout << "The factorial of " << n << " = " << factorial(n);
}