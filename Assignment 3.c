#include<stdio.h>
int main () {
int choice;
float n1,n2 ,result;
do{
printf("========MENU========\n");
PRINTF("1. ADDITION\n");
PRINTF("2.SUBTRACTION\n");
PRINTF("3.MULTIPLICATION\n");
printf("4.DIVISION\n");
printf("5.EXIT PROGRAM\n");
printf("enter your choice:\n");
scanf("%d" ,&choice);
if(1<=choice && choice <=4)
{
printf("enter the first number\n");
scanf("%f",&n1);
printf("Enter the second number\n");
scanf("%f",&n2);
}
switch(choice)
{
case 1:
result=n1+n2;
printf("SUM=%.2f\n",result);
break;
case 2:
result=n1-n2;
printf("SUBTRACTION=%.2f\n",result);
break;
case 3:
result=n1*n2;
printf("MULTIPLICATION=%.2f\n",result);
break;
case 4:
if(n2!=0)
{result=n1/n2;
printf("DIVISION=%.2f\n"),result);
}
else
{printf("CANNOT DIVIDE BY ZERO!!!\n");
}
break;
case 5:
printf("Exiting program\n");
break;
default:
printf("Invalid choice\n");
break;
}
}
while(choice!=5);
return 0;
}

