#include<stdio.h>
int main()
{
int CGPA;
printf("Enter CGPA obtained in previous year :-");
scanf("%d",&CGPA);
switch (CGPA)
{
case 10:
    printf("Section alloted to you is :- A");
    break;
case 9:
    printf("Section alloted to you is :- A");
    break;
case 8:
    printf("Section alloted to you is :- B");
    break;
case 7:
    printf("Section alloted to you is :- C");
    break;
case 6:
    printf("Section alloted to you is :- D");
    break;
default:
    printf("You have Failed");
}
return 0;
}