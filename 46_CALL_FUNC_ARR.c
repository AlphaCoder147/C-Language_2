#include<stdio.h>
int display(m)
int m;
{
    printf("%d\n",m);
}
int main()
{
int i;
static int marks[]={55,65,35,14,28,14,64};
for(i=0;i<=6;i++)
{
    display(marks[i]);
}
return 0;
}