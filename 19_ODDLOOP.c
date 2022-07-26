#include<stdio.h>
int main()
{
char ans,ANS;
int num;
printf("Do you want to calculate the square of a number");
scanf("%c",&ans);
while (ans=='Y')
{
    printf("Enter the number you want to know the square of :-");
    scanf("%d",&num);
    printf("\nSquare of %d is %d\n",num,num*num);
    printf("\nDo you want to enter another number Y/N :\n");
    scanf("%c",&ANS);
}
//NOT WORKING... GOING INTO AN INFINITE LOOP//
return 0;
}