#include <stdio.h>
int fac(x)
int x;
{
    int f;
    if(x==1)
    {
        return(1);
    }
    
    else
    {
        f=x*fac(x-1);
    }
    return(f);
}

int main()
{
int a,fact;
printf("\nEnter a number:-");
scanf("%d",&a);
fact=fac(a);
printf("Factorial value=%d",fact);
return 0;
}