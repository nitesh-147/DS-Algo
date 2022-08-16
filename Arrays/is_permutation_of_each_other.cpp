#include<bits/stdc++.h>
using namespace std;

bool permutation(int a1[],int a2[],int n){
     int s1=0,s2=0,m1=1,m2=1;
     for(int i=0;i<n;i++){
        s1+=a1[i];
        m1*=a1[i];
         s2+=a2[i];
        m2*=a2[i];
     }
     if(s1==s2 && m1==m2)
     return true;

     return false;
}

int main()
{
    int n=5;
    int a1[]={1,2,3,4,5};
    int a2[]={4,5,1,1,3};

    cout<<permutation(a1,a2,n);
return 0;
}