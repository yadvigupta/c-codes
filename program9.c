#include<stdio.h>
 int main()
 {
int x,y,temp;
printf ("Enter the value of x=");
scanf("%d",&x);
printf("Enter the value of y=");
scanf("%d",&y);
temp=x;
x=y;
y=temp;
printf ("The new value of x =%d,y= %d",x,y);
return 0;
 }