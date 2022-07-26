#include<stdio.h>
int main()
{
int std[4][2];
int i,j;

for(i=0;i<=3;i++)
{
    printf("\nEnter Rollno and Marks:-\n");
    scanf("%d %d",&std[i][0],&std[i][1]);
}
    printf("\nRollNo Marks\n");

for(i=0;i<=3;i++)
{
    printf("%d   %d\n",std[i][0],std[i][1]);
}
return 0;
}