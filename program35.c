//WAP to read a number from the user and if number is positive print the cube otherwise print the square of the number
#include<stdio.h>
 int main()
{
int n;
printf("Enter Number :");
scanf("%d",&n);
if(n>0)
{
    printf("Cube=%d",n*n*n);
}
else
{
printf("Square=%d",n*n);
}
return 0;
}