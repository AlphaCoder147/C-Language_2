#include<stdio.h>
void fun(b)
int b;
{
b=60;
printf("%d\n",b);
}
int main()
{
int a;
a=30;
fun(a);
printf("%d",a);
return 0;
}