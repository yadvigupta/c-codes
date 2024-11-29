//write a program the sum of two numbers
#include<stdio.h>
int main()
{
int x,y,sum,difference,remainder,product;
printf("Enter a value of x=");
scanf ("%d",&x);
printf("Enter a value of y=");
scanf ("%d",&y);
sum=x+y;
difference =x-y;
product =x*y;
remainder=x%y;
printf("sum=%d difference=%d product=%d Remainder=%d",sum,difference,product,remainder);
return 0;
}