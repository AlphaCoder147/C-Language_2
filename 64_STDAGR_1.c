#include<stdio.h>
#include<stdarg.h>
int findmax(tot_num)                       //VA_START throwing error//
int tot_num;
{
    int max,count,num;
    va_list ptr;
    max=va_arg(ptr,int);
    va_start(ptr,tot_num);
    for(count=1;count<tot_num;count++)
    {
        num=va_arg(ptr,int);
        if(max<num)
        {
            max=num;
        }
    }
    va_end(ptr);
return (max);
}
int main()
{
int max;
max=findmax(5,23,45,69,99,12);
printf("\nMax=%d",max);
max=findmax(300,420,69);
printf("\nMax=%d",max);
return 0;
}