#include<stdio.h>
int main()
{
float avg,sum=0;
int i;
int marks[30];//array declration//
for(i=0;i<=4;i++)
{
    printf("\nEnter Marks:-\n");
    scanf("%d",&marks[i]);  //Store data in array//
}
for(i=0;i<=4;i++)
{
    sum=sum+marks[i];//read data fram an array//
}
avg=sum/5;
printf("Average marks=%f",avg);
return 0;
}