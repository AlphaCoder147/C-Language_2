#include<stdio.h>
int main()
{
static int stud[5][2]={
    {1234,56},
    {1212,98},
    {1456,87},
    {7845,26},
    {1265,65}
};
int i,j;
for(i=0;i<=4;i++)
{
    for(j=0;j<=1;j++)
    {
        printf("%d ",*(*(stud+i)+j));
    }
    printf("\n");
}
return 0;
}