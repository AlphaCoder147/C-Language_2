#include<stdio.h>
int main()
{
int num;
int i=2;
printf("Enter a number:- ");
scanf("%d",&num);
while(i<=num-1)
{
    if(num%i==0)
    {
        printf("Not a Prime Number");
        break;
    }
    
    if (num%i!=0)
    {
        printf("Prime Number");
        break;
    }
    
}
return 0;
}