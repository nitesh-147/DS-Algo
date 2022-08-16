// write a program to find all pairs of integers whose sum is equal to a given number?
// e.g: arr=[1,2,3,4,5,6] target=11
// ans: [5,6]
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int target=15;
   int n=sizeof(arr)/sizeof(arr[0]);
  int i,j;
   for( i=0;i<n-1;i++){
    for( j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
            break;
        }
    }
        if(j!=n)
        break;
   }
   if(i==n-1 && j==n)
   cout<<"NO SOLUTION FOUND"<<endl;
    return 0;
}