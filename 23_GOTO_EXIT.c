#include<stdio.h>
#include<stdlib.h>
int main()
{
int goals;
printf("Enter the number of goals scored against Liverpool");
scanf("%d",&goals);
if(goals<=5)
goto sos;
else
{
    printf("Its about time youu learn to play\n");
    printf("Fucking loser!!!\n");
    printf("Idiot..");
    exit(0);
}
sos:
printf("To err is human");
return 0;
}