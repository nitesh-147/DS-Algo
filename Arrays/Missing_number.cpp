// Find the missing number in an integer array of 1 and 10.
// 1,2,3,4,.......,10

#include<iostream>
using namespace std;

int missing(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
   int esum=10*11/2;

   return esum-sum;
}

int main(){
int arr[]={2,3,4,5,6,7,8,9,10};

cout<<"Missing no. is: "<<missing(arr,9);
    return 0;
}