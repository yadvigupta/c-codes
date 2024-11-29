#include<stdio.h>
 int main()
{
 int x,y;
 printf("Enter the value of x=");
 scanf("%d",&x);
 printf("Enter the value of y=");
 scanf ("%d",&y);
 x=y+x;
 y=x-y;
 x=x-y;
 printf("The new value of x=%d and y=%d",x,y);
return 0;
}
 