//wap a program a 5 digit number from the user and perform the sum of their digits.
#include<stdio.h>
 int main()
 {
int n,a,b,c,d,e,sum;
printf("Enter a number=");
scanf("%d",&n);
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
d=n%10;
n=n/10;
e=n%10;
n=n/10;
sum=a+b+c+d+e;
printf("Sum=%d",sum);
return 0;
 }