//WAP to perform and the sum of all the rows and columns of 2D array.
#include<stdio.h>
int main()
{
int row,col;
printf("Enter row and column size: ");
scanf("%d%d",&row,&col);
int arr[row][col];
printf("Array elements are: ");
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++){
scanf("%d",&arr[i][j]);
}
}
printf("Array elements are: \n");
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}