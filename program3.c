#include<stdio.h>
int main()
{
    char ch;
    int x;
    float y;
    double z;
  printf ("Enter a character=");
  scanf ("%C",&ch);
  printf("Enter an integer=");
  scanf("%d",&x);
  printf ("Enter a number=");
  scanf("%f",&y);
  printf("Enter a rational number=");
  scanf("%lf",&z);
    printf ("ch=%c",ch);
    printf(" x=%d",x);
    printf(" y=%f",y);
    printf (" z=%lf",z); 
  return 0;  
}    