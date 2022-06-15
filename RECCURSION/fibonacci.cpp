// reccursive approach to find nth fibonacci no.
//  0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8 -> 13 -> 21 -> 34 -> 55 -> 89 .......

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1 || n == 0)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    cout << "The " << n << "th fibonacci no. is:  " << fibonacci(n);
}