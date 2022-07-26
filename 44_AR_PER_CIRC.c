#include<stdio.h>
float Area(r,a)
int r;
float *a;
{
*a=3.14*r*r;
}
float Peri(r,p)
int r;
float *p;
{
    *p=2*3.14*r;
}
int main()
{
int radius;
float area,perimeter;
printf("Enter the radius of the circle:-");
scanf("%d",&radius);
Area(radius,&area);
Peri(radius,&perimeter);

printf("\nArea=%0.3f",area);
printf("\nPerimeter=%0.3f",perimeter);
return 0;
}