#include<stdio.h>
int main()
{
int phy,chem,math,count;
float percent,total;
for(count=1;count<=3;count=count+1)
{
    printf("\nEnter marks obtained in Phycis, Chemistry and Maths :- ");
    scanf(" %d %d %d",&phy,&chem,&math);
    total = phy+chem+math;

    percent=(total/300)*100;
    printf("Total percentage obationed in PCM is %0.1f",percent);
}
return 0;
}