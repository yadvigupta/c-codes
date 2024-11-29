//WAP to perform the sum of first and large digit.
#include <stdio.h>
#include<math.h>
int main()
{
int num;
printf("Enter a number=");
scanf("%d",&num);
int digits =(int)log10(num)+1;
int firstdigit = num/pow(10,digits-1);
int lastdigit = num%10;
int sum =firstdigit+lastdigit;
printf("Sum of first and last digit =%d",sum);
return 0;
}
