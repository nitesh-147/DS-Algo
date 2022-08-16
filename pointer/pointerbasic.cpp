#include<bits/stdc++.h>
using namespace std;


int main()
{
int i=2;
int *j=&i;
int **k=&j; //j will store the  address of i
printf("The value of i is %d\n",i);
printf("The value of j is %d\n",*j);
printf("The value of i is %u\n",&i);
printf("The value of j is %u\n",j);
printf("The value of j is %u\n",&j);
printf("The value of j is %u\n",*(&j));
printf("The value of j is %u\n",k);
cout<<i<<" "<<*j<<" "<<&i<<" "<<j<<endl;
return 0;
}