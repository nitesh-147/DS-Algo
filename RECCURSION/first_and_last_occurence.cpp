// Q. Find the first and last occurence of a number in an array
#include <bits/stdc++.h>
using namespace std;

int first_occ(int a[], int i, int n, int key)
{
    if (i == n)
        return -1;

    if (a[i] == key)
        return i;

    return first_occ(a, i + 1, n, key);
}
int last_occ(int a[], int i, int n, int key)
{
    if (i == n)
        return -1;

    int rest = last_occ(a, i + 1, n, key);
    if (rest != -1)
        return rest;

    if (a[i] == key)
        return i;

    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 2, 5, 2, 6, 7, 8};
    cout << "First occurence= " << first_occ(a, 0, 10, 2) << endl;
    cout << "last occurence= " << last_occ(a, 0, 10, 2) << endl;
    return 0;
}