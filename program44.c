//WAP to find the greatest number among the three digits.
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the value of a=");
scanf("%d",&a);
printf("Enter the value of b=");
scanf("%d",&b);
printf("Enter the value of c=");
scanf("%d",&c);
if(a>b && a>c)
{
printf("%d is greatest number",a);
}
if(b>c && b>a)
{
printf("%d is greatest number",b);
}
else 
{
printf("%d is the greatest",c);
}
return 0;
}