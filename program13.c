#include<stdio.h>
 int main()
{
int F,C;
printf("Enter the value of temperature in fahrenheit=",F);
scanf("%d",&F);
C=(F-32)*0.56;
printf("The value of temperature in celsius=%d",C);
return 0;
}