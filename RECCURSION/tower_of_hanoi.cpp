#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char s,char d,char h){
    if(n==0)
    return;

    towerOfHanoi(n-1,s,h,d);
    cout<<s<<" to "<<d<<endl;
    towerOfHanoi(n-1,h,d,s);
}

int main(){
towerOfHanoi(4,'A','B','C');
return 0;
}