#include<stdio.h>
char *copy(t,s)
char *t,*s;
{
    char *r;
    r=t;
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t='\0';
    return(r);
}
int main()
{
char *str;
char *copy();
static char source[]="Jaded";
static char target[5];
str=copy(target,source);
printf("%s",str);
return 0;
}