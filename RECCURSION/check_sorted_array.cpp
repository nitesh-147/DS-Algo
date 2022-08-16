#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int a[],int n){
  if (n==1)
  return true;
    return (a[0]<=a[1] && is_sorted(a+1,n-1));
}

int main(){

int a[]={1,5,3,4};
cout<<is_sorted(a,4);
return 0;
}