//WAP to check whether the given number is one digit ,two digit and three digit or more then three digit.
#include <stdio.h>
int main()
{
int a;
printf("Enter a value of a=");
scanf("%d",&a);
if(a<10)
printf("It is a one digit number.");
else if(a<100 && a>=10)
printf("It is a two digit number.");
else if (a<1000 && a>=100)
printf("It is a three digit number.");
else
printf("It is more than three digit number.");
return 0;
}