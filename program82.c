//WAP to find the sum of all the elements of an array.
#include<stdio.h>
int main()
{
int size,sum=0;
printf("Enter array size : ");
scanf("%d",&size);
int arr[size];
printf("Enter Array elements: ");
for (int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
 printf("Array elements are: ");  
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    sum= sum +arr[i];
}
printf("sum=%d",sum);
return 0;
}   