//WAP to read and display the elemnts of    2D array.
#include<stdio.h>
int main()
{
int arr[4][3];
printf("Array elements are: ");
for(int i=0;i<4;i++)
{
for(int j=0;j<3;j++){
scanf("%d",&arr[i][j]);
}
}
printf("Array elements are: \n");
for(int i=0;i<4;i++)
{
    for(int j=0;j<3;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}