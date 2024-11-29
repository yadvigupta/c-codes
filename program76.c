#include <stdio.h>
int main()
{
    int j,i,n;
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
  {
    if(i==j||i==n||j==1)
     printf("*");
else
    printf(" ");

   }
    }
  
return 0;
}
