// reccursive approach to find product of an array

#include <iostream>
using namespace std;
int product(int a[], int n)
{
    if (n == 0)
        return 1;

    return a[n - 1] * product(a, n - 1);
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter the array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The array elements are: " << endl;
    display(a, n);
    cout << "\nThe product of the given array is: " << product(a, n);
}