#include<stdio.h>
int main()
{
int weight;
printf("Enter your weight:-");
scanf("%d",&weight);
printf("Weight is %d kg\n",weight);
printf("Weight is %2dkg\n",weight);
printf("Weight is %4dkg\n",weight);
printf("Weight is %6dkg\n",weight);
printf("Weight is %-6dkg\n",weight);

return 0;
}