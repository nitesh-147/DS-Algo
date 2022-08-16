#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={12,2,3,40,5};
    int max_p=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]*arr[j]>max_p)
            max_p=arr[i]*arr[j];
        }
    }
    cout<<"The max product is: "<<max_p<<endl;
    return 0;
}