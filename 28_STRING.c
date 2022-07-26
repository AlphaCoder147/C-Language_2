#include<stdio.h>
int main()
{
static char firstname1[]="Suraj";
static char surname1[]="Badchikar";
static char firstname2[]="Advait";
static char surname2[]="Keskar";
printf("%20s    %20s\n",firstname1,surname1);
printf("%20s    %20s\n",firstname2,surname2);
return 0;
}