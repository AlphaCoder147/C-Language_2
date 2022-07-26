#include<stdio.h>
float square(x)
float x;
{
    float y;
    y=x*x;
    return(y);
}
int main()
{
float square();
float a,b;
printf("\nEnter any number:-");
scanf("%f",&a);
b=square(a);
printf("\nThe Square of %0.3f is %0.4f",a,b);
return 0;
}