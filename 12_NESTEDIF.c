#include<stdio.h>
int main()
{
char y,n,a;
printf("Do you wanna go to heaven?: ");
scanf("%c",&a,&y,&n);
if(a=='y')

    printf("Welcome to Heaven!!");

else
{
    if(a=='n')
        printf("Rot in Hell, PEASANT!!");
    else
    {
        printf("IDGAF");
    } 
}
return 0;
}