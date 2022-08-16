#include<stdio.h>
#include<string.h> 

struct employee
{
    /* data */
    int id;
    float salary;
    char name[10];
};

int main()
{
//   struct employee e1={0};
//   e1.id=100;
//   e1.salary=2000.29;
// //   e1.name="Nitesh";
// strcpy(e1.name,"Nitesh");
struct employee e1={0,12.299,"nkr"};
printf("%d\n",e1.id);
printf("%.2f\n",e1.salary);

printf("%s\n",e1.name);

return 0;
}