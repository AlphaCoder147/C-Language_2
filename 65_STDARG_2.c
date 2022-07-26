#include<stdio.h>
#include<stdarg.h>
int display(type,num)
int type,num;
{
    int i,j;
    char c;
    float f;
    va_list ptr;
    va_start(ptr,num);//VA_START IS THROWING ERROR....ELLIPSIS PARAMETER..??//
    switch (type)
    {
        case 1:
        for (j=1;j<=num;j++)
        {
            i=va_arg(ptr,int);
            printf("%d",i);
        }
        break;
        case 2:
        for (j=1;j<=num;j++)
        {
            c=va_arg(ptr,char);
            printf("%c",c);
        }
        break;
        case 3:
        for(j=1;j<=num;j++)
        {
            f=(float)va_arg(ptr,double);
            printf("%f",f);
        }
    }
}
int main()
{
printf("\n");
display(1,2,5,6);    
printf("\n");
display(2,4,'A','a','b','c');
printf("\n");
display(3,3,2.5,299.3,-1.0);
return 0;
}