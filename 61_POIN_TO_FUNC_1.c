#include<stdio.h>
int display()
{
    puts("Long live viruses");
}
int main()
{
//getting the address of a function//
int display();
printf("Address of a function is %d\n",display);
display();
return 0;
}