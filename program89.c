//WAP to perform the sum of all the elemnts of 2D array.
#include<stdio.h>
int main()
{
int row,col,sum=0;
printf("Enter row and column size: ");
scanf("%d%d",&row,&col);
int arr[row][col];
printf("Enter array elements: ");
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++){
scanf("%d",&arr[i][j]);
sum=sum+arr[i][j];
}
}
printf("Sum of all the array elements are:%d",sum);
return 0;
}