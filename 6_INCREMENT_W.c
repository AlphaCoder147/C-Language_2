#include<stdio.h>
int main()
{
    /*a++ and a--works only indenpendently and NOT WITHIN ANY ONTHER FUNCTION*/
    int a=10, b=10;
    printf("%d\n",a++);
    printf("%d",++b);
    
}