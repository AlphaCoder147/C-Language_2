#include<stdio.h>
float main()
{
    //Basic Simpple interest program using SCANF
    float p, n, r, si;
    printf("enter values here");
    scanf("%f %f %f", &p, &n, &r);
    si=(p*n*r)/100;
    printf("%f", si);
    return 0;
}
