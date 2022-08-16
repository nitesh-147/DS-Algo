#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int st, int end, int key)
{
    bool flag = true;
    if (a[st] > a[end])
        flag = false;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (a[mid] == key)
            return mid;
        else if (flag)
        {

            if (a[mid] < key)
                st = mid + 1;
            else
                end = mid - 1;
        }
        else
        {

            if (a[mid] > key)
                st = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // in agnostic search the array might be sorted in ascending or descending order
    int a[] = {9,3,2,1,0};
    cout << binarysearch(a, 0, 4, 3);
    return 0;
}