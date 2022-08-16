#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int st, int end, int key)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            st = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int a[] = {100,97,54,53,43,41,32,31,24,1};
    cout << binarysearch(a, 0, 9, 54);
    return 0;
}