#include<stdio.h>
int main()
{
static int num[]={24,34,36,38,40,42};
int i=0,*j;
j=&num[0];
while(i<=5)
{
    printf("address=%d\t",j);
    printf("element=%d\n",i);
    i++;
    j++;
}
return 0;
}