#include<stdio.h>
int main()
{
int arr[5]={10,20,30,40,50};
printf("Enter array elements : ");
for (int i=0;i<5;i++){
scanf("%d",&arr[i]);
}
printf("Array elements are: ");
for (int i=0;i<5;i++)
{
 printf(" %d",arr[i]);    
}
return 0;
}