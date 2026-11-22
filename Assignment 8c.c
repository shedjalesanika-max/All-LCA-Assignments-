#include <stdio.h>

void swap(float *a, float *b)
{
float temp;
temp=*a;
*a=*b;
*b=temp;
int main()
{ float temp1, temp2;
printf("Enter temperature of incubator 1: ");
scanf("%f", &temp1); 
printf("Enter temperature of incubator 2: "); 
scanf("%f", &temp2);

printf("Before swapping \n");
printf("Incubator 1 temperature= %.2fC\n", temp1);
printf("Incubator 2 temperature= %.2fC\n", temp2);

swap(&temp1,&temp2);

printf("\nAfter swapping\n"); printf("Incubator 1 temperature= %.2fC\n", temp1); printf("Incubator 2 temperature= %.2fC\n", temp2);
 return 0;
}
