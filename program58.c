//WAP to print fibonacci series upto n terms.
#include <stdio.h>
int main()
{
    int N,i,a=0,b=1,c;
printf("Enter the value of N=");
scanf("%d",&N);
printf("%d %d ",a,b);
for(i=3; i<=N; i++)
{
    c = a+b;
    printf("%d ",c);
    a=b;
    b=c;
    }
    return 0;
}
