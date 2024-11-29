//WAP to print the factorial of a given number.
#include <stdio.h>
int main()
{
int i,n,factorial=1;
printf("Enter the number of whose factorial you want to find=");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
factorial=factorial*i;
}
printf("%d",factorial);

    return 0;
}
