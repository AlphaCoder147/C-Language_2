#include<stdio.h>
int main()
{
int i=3;
printf("Address of i=%d\n",&i);
printf("Value of i=%d\n",i);
printf("VALUE OF i ON ADDRESS=%d",*(&i));
return 0;
}