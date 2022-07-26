#include<stdio.h>
int main()
{
int cy,yoj,yos,bonus;
printf("Enter Current year and Year of Joining :");
scanf("%d %d",&cy,&yoj);
yos=cy-yoj;
if(yos<=3)
{
    bonus=2500;
    printf("BONUS = Rs.%d",bonus);
    printf("\n");
}
if(yos>3)
{
    bonus=3000;
    printf("BONUS = Rs.%d",bonus);
    printf("\n");
}
return 0;
printf("\n");
}