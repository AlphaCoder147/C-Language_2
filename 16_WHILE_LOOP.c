#include<stdio.h>
int main()
{
//Calculation of simple interest for 3 sets of pnr
int p,n,count;
float r,si;
printf("Enter count:-");
scanf("%d",&count);
while(count<=3)
{
    printf("\nEnter Pricipal, Rate of Interest and No.of Years:-");
    scanf("%d %f %d",&p,&r,&n);
    si= (p*n*r)/100;
    printf("Simple interest is Rs.%f",si);

    count=count+1;  
}
if (count>4)
{
    printf("Invalid count... Enter a count less than 3.");
}
return 0;
}