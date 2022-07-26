#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,avg,i,*p,sum=0;
printf("Enter the number of students:-");
scanf("%d",&n);

p=(int*)malloc(n*2);
if(p==NULL)
{
    printf("\nMemory alloction unsuccessful.");
    exit(0);
}
for(i=0;i<n;i++)
{
    printf("Marks of students:-");
    scanf("%d",(p+i));
}
for(i=0;i<n;i++)
{
    sum=sum+*p;
}
avg=sum/n;
printf("Average marks=%d",avg);
return 0;
}