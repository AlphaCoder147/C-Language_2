#include<stdio.h>
int calsum(x,y,z)
//REMEBER TO DEFINE X,Y,Z OUTSIDE THE FUNCTION//
int x,y,z;
{
    int d;
    d=x+y+z;
    return(d);
    //NT RETURN ZORE BUT RETURN D//
}
int main()
{
int a,b,c,sum;
printf("Enater any three numbers:-");
scanf("%d %d %d",&a,&b,&c);
sum=calsum(a,b,c);
printf("Sum is %d",sum);
return 0;
}
//SENDING INFORMATION BETWEEN FUNCTIONS//