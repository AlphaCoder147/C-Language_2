#include<stdio.h>
int main()
{
int i=3,*x;
printf("Value of i=%d\n",i);
x=&i;
printf("Orignal value of x=%d\n",x);
x++;
printf("New value of x=%d",x);
return 0;
}