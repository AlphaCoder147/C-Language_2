#include<stdio.h>
char main()
{
    char sex,ms;
    int age;
    printf("Enter your Age,Sex and Marital Status:- ");
    scanf("%d   %c  %c",&age,&sex,&ms);
    if((ms=='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
    printf("Driver is insured");
    else
    {
        printf("Driver is not Insured");
    }
    

return 0;
}