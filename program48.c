//WAP to check whether given year is leap or not.
#include <stdio.h>
int main()
{
int year;
printf("Enter year: ");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
printf("Input year is a leap year");
else 
printf("Input year is not a leap year");
}
else if (year%4==0)
printf("Input year is a leap year");
else 
printf("Input year is not a leap year");
return 0;
}