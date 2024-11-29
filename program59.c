//WAP to find maximum of N number.
#include <stdio.h>
int main()
{
int n,i,num,max=0;
printf("Enter the value of n=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter number=");
    scanf("%d",&num);
if(num>max)
max=num;
}
printf("max=%d",max);
    return 0;
}
