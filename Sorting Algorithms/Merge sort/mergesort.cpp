#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int u)
{
    int i = l, k = l;
    int j = mid + 1;
    int b[u + 1];

    while (i <= mid && j <= u)
    {
        if (a[i] <= a[j])
            b[k++] = a[i++];

         else
            b[k++] = a[j++];
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }

    while (j <= u)
    {
        b[k++] = a[j++];
    }

    for (int i = l; i <= u; i++)
        a[i] = b[i];
}

void mergesort(int a[], int l, int u)
{
    if(l>u)
    return;
    else
    {
        int mid = (l + u) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, u);
        merge(a, l, mid, u);
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";

        
    }
    cout << endl;
}

int main()
{
    int a[5] = {8, 3, 5, 12, 78};
    print(a, 5);
    mergesort(a, 0, 4);
    print(a, 5);
    cout<<a[0];
    return 0;
}