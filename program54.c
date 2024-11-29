//WAP to print the series 1 4 9 16 25 .....N
#include <stdio.h>
#include<math.h>
int main()
{
  int N,i;
  printf ("Enter the value of N=");
  scanf("%d",&N);
  for(i=1;i<=N;i++)
  {
printf("%d ",i*i);
  }

    return 0;
}
