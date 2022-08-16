#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    printf("The no. of arguments is: %d",argc);
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    printf("\n%d",a+b);
    return 0;
}
