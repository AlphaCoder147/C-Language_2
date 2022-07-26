#include<stdio.h>
int main()
{
float bs,gs,da,hra;
printf("Enter Basic Salary :");
scanf("%f",&bs);
if (bs>=1500)
{
    hra = 500;
    da=bs*50/100;
}
else
{
    hra=bs*10/100;
    da=bs*25/100;
}
gs=bs=hra=da;
printf("Your Gross salary is : Rs.%0.2f",gs);
return 0;
}