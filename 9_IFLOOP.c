#include<stdio.h>
int main()
{
    //if loop program.
int qty,dis=0;
float rate,tot;
printf("Enter Quantity and Rate :");
scanf("%d %f",&qty, &rate);
if (qty>1000)
dis=10;
tot=(qty*rate) - ((qty*rate*dis)/100);
printf("\nTotal Expenses in Rs= Rs.%0.2f",tot);
return 0;
}