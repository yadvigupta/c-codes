//WAP to swap 1st and last digit of a given number.
#include <stdio.h>
#include<math.h>
int main()
{
int num,temp;
printf("Enter a number=");
scanf("%d",&num);
int digits =(int)log10(num)+1;
int firstdigit = num/pow(10,digits-1);
int p=(int)pow(10,digits-1);
num=num%p;
int lastdigit = num%10;
num =num/10;
num=lastdigit*pow(10,digits-1)+ num*10 +firstdigit;
printf("new number=%d",num);

return 0;
} 
