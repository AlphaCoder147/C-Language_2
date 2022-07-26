#include<stdio.h>
int main()
{
static int num[]={24,34,56,78,12,69};
int i=0;
while(i<=5)
{
    printf("address=%d\t",&num[i]);
    printf("element=%d",num[i]);
    printf("\t%d",*(num+i));
    printf("\t%d",*(i+num));
    printf("\t%d\n",i[num]);
    i++;
}
return 0;
}