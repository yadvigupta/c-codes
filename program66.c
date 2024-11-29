#include <stdio.h>
int main()
  {
    int N,i;
    printf("Enter the value of N=");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%5==0 && i%7==0)
        break;
printf("%d ",i);
    }  
return 0;
}
