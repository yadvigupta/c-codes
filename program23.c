//wap to find the largest number among three using ternary numbers
#include<stdio.h>
void main()
 {
int a,b,c;
printf("Enter value of a=",a);
scanf("%d",&a);
printf("Enter value of b=",b);
scanf("%d",&b);
printf("Enter value of c=",c);
scanf("%d",&c);
(a>b && a>c)?printf("%d",a):(b>a && b>c)?printf("%d",b):printf("%d",c);
 }