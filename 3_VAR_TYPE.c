#include<stdio.h>
int main()
{
    //variable type program
    char c;
    unsigned char d;
    int i;
    unsigned int j;
    long int k;
    unsigned long int m;
    float x;
    double y;
    char ch=35;
    printf("%c\n%c",ch, ch);
    scanf("%c %c", &c, &d);
    printf("%c\n%c\n", c, d);
    scanf("%d %u", &i,&j);
    printf("%d\n%u\n", i,j);
    scanf("%ld %lu", &k, &m);
    printf("%ld\n%lu\n", k, m);
    scanf("%f %lf",&x, &y);
    printf("%f\n%lf\n", x, y);
    return 0;
}