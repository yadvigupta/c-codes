//WAP to count number of digits in a given number without using built-in function.
#include <stdio.h>
#include<math.h>
int main()
{
int num,digits=0;
printf("Enter a Number: ");
scanf("%d",&num);
while(num!=0)
{                                                                                                           
    num=num/10;
    digits++;
}
printf("Number of digits are %d",digits);
return 0;
}
    