#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0)
    return;
    print(n-1);
    cout<<n<<" ";
}
void printdesc(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    printdesc(n-1);
}

int main(){
int n=5;
print(5);
cout<<"\n";
printdesc(5);
return 0;
}