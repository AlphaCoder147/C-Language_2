#include<stdio.h>
int main()
{
static int num[]={24,34,12,44,56,71};
int i=0;
while(i<=5)
{
    printf("element no.%d\t",i);
    printf("address=%d\n",&num[i]);
    i++;
}
return 0;
}