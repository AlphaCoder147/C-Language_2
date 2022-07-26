#include<stdio.h>
int main()
{
    //AUTO NESTING program
    auto int i=1;
    {
        auto int i=2;
        {
            auto int i=3;
            {
                auto int i=4;
                printf("%d\n", i);
            }
            printf("%d\n", i);
        }
        printf("%d\n",i);
    }
    printf("%d\n", i);
}
