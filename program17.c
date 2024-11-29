#include<stdio.h> 
 int main()
 {
//wap a program a 5 digit number from the user and perform the sum of their digits.alternate method.
int n,sum=0;
printf("Enter a number=");
scanf("%d",&n);
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
printf("Sum=%d",sum);
return 0;
 }