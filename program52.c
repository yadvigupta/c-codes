//WAP to print all even numbers from 1 to N.
#include <stdio.h>
int main()
{
    int i,N;
    printf("Enter the value of N=");
    scanf("%d",&N);
    for(i=2;i<=N;i+=2)
    {
    printf("%d ",i);
    }
return 0;
} 