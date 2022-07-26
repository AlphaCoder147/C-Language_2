#include<stdio.h>
int main()
{
//nested for loops
int a,b,product;
for (a=1; a<=5;a++)
{
    for (b=1;b<=5;b++)
    {
        product=a*b;
        printf("a=%d b=%d product=%d\n",a,b,product);
    }
    
}

return 0;
}