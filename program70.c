//WAP to print all the odd numbers from 1 to n.
#include <stdio.h>
int main()
{
    int i,N;
    printf("Enter the value of N=");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
    if(i%2!=0)
    printf("%d ",i);
    }
return 0;
} 
