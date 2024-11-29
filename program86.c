#include<stdio.h>
int main()
{
int arr[4][3]={{11,67,34},{45,89,74},{58,77,44},{69,45,78}};
// it can be also be written as-int arr[4][3]={11,67,34,45,89,74,58,77,44,69,45,78};
printf("Array elements are: \n");
for(int i=0;i<4;i++)
{
for(int j=0;j<3;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}