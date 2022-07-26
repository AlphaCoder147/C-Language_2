#include<stdio.h>
int swap(x,y)
int x,y;
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
int main()
{
int a=10;
int b=20;
swap(a,b);
printf("a=%d\n",a);
printf("b=%d\n",b);
return 0;
}