#include<stdio.h>
int main()
//First try BITCH....
{
int phy,chem,math,eng;
float per;
printf("Enter marks obtained in PHYSICS, CHEMISTRY, MATHS & ENGLISH :-");
scanf("%d,%d,%d,%d",&phy,&chem,&math,&eng);
per=(phy+chem+math+eng)/4;
if(per>=80)
printf("Congratulation!! You have secured First Class...:)");
else{
    if (per>=70)
    printf("Congratulations!! You have secured Second  Class...:)");
    else{
        if(per>=60)
        printf("Congratulations!! You have secured Third Class...");
        else{
            if(per>=50)
            printf("Congratulations!! You have secured Fourth Class...");
            else{
                if(per>=40)
                printf("Congratulations!! You have secured Fifth Class...");
                else{
                    printf("You Have Failed...Please RE-APPEAR");
                }
            }
        }
    }
} 
return 0;
}