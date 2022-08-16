#include <bits/stdc++.h>
using namespace std;

int firstoccurence(int a[], int st, int end, int key)
{
    int res = -1;
    while (st <= end)
    {

        int mid = st + (end - st) / 2;
        if (a[mid] == key)
        {
            res = mid;
            end = mid - 1;
        }
        else if (a[mid] < key)
            st = mid + 1;
        else
            end = mid - 1;
    }
    return res;
}
int lastoccurence(int a[], int st, int end, int key)
{
    int res = -1;
    while (st <= end)
    {

        int mid = st + (end - st) / 2;
        if (a[mid] == key)
        {
            res = mid;
            st = mid+1;
        }
        else if (a[mid] < key)
            st = mid + 1;
        else
            end = mid - 1;
    }
    return res;
}
int main()
{
    int a[] = {1, 2, 10, 10, 10, 10, 10, 10, 10, 10};
    cout <<lastoccurence(a, 0, 9, 10)-firstoccurence(a, 0, 9, 10)+1;
    return 0;
}