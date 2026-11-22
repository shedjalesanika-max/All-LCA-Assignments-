#include<stdio.h>
struct Sample
{
int sampleID;
char sampleType[30];
float initialMass;
float finalMass;
float percentageChange;
};
int main()
{
struct Sample s[100];
int n,i;
printf("enter number of samples:");
scanf("%d", &n);
for (i=0; i<n; i++)
{
printf("\nenter details of sample %d\n", i+1);
printf("enter sample ID :");
scanf("%d",&s[i].sampleID);
printf("enter sample Type:");
scanf("%29s",s[i].sampleType);
printf("enter initial Mass:");
scanf("%f",&s[i].initialMass);
printf("enter final Mass;");
scanf("%f", &s[i].finalMass);
s[i].percentageChange =
((s[i].finalMass - s[i].initialMass)
/ s[i].initialMass) * 100;
}
printf("\n---bioengineering sample report---\n");
for (i=0; i<n; i++)
{
printf("\nsample ID:%d",s[i].sampleID);
printf("\nsample Type: %s",s[i].sampleType);
printf("\ninitialMass: %.2f",s[i].initialMass);
printf("\nfinalMass : %.2f" ,s[i].finalMass);
printf("\npercentage mass Change:%.2f%%\1n",
s[i].percentageChange);
}
return 0;
}
