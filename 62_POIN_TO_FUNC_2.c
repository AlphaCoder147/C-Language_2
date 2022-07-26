#include<stdio.h>
int display()
{
    puts("Long live the QUEEN");
}
int main()
{
int display();
int(*func_ptr)();
func_ptr=display;//Assinging address of funtion//
printf("Address of function is %d\n",func_ptr);
(*func_ptr)();
return 0;
}