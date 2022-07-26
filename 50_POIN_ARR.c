#include<stdio.h>
int display(j,n)
int *j,n;
{
    int i=1;
    while(i<=n)
    {
        printf("Element=%d\n",*j);
        i++;
        j++;
    }
}
int main()
{
static int num[]={24,34,12,44,56,71};
display(&num[0],6);
return 0;
}