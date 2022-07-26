#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter a number:-");
scanf("%d",&n);
/*for(i=1;i<=n;i++)
{
    sum+=i;
}*/
while (i<=n)
{
    sum+=i;
    i++;
}

printf("Number= %d\n",n);
printf("Summation= %d",sum);
return 0;
}