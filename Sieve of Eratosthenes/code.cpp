// Display the prime no. less than equal to given number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1]={0};
    // for(int i=0;i<=n;i++)
    // cout<<a[i]<<" ";
    for (int i = 2; i <= n; i++)
    {
    //     if (a[i])
    //     {
    //         for (int j = i * 2; j <= n; j += i)
    //             a[j] = 0;
    //     }
    // }
    // for (int i = 2; i <= n; i++)
    // {
    //     if (a[i]==1)
    //         cout << i << " ";
    // }
    // {
        if(!a[i])
        cout<<i<<" ";
        if (!a[i] && i*i<=n)
        {
           
            for (int j = 2 * i; j <= n; j += i)
                a[j] = 1;
        }
    }

    return 0;
}