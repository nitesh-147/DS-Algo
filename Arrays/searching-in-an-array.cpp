#include<iostream>
using namespace std;
void search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<target<<" is found at index "<<i<<endl;
            return;
        }
    }
    cout<<target<<" is not found."<<endl;
}
int main(){
    int n=10;
    int arr[10]={
        1,2,3,4,5,6,7,8,9,10
    };
   
   search(arr,10,100);
}