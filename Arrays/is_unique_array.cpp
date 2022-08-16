#include<bits/stdc++.h>
using namespace std;

bool isUnique(int arr[],int n){
    // int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j])
        return false;
       }
  }
  return true;
}

int main()
{
int arr[]={1,2,3,4,3};
cout<<isUnique(arr,5)<<endl;
return 0;
}