#include <stdio.h>
void getMessage (void);
int convertToBinary(void);
int computerSimpleInterest(int,int,int);
int main()
{
int p,r,t;
printf("Enter P,R,T:");
scanf("%d %d %d",&p,&r,&t);
int si =computeSimpleInterest(p,r,t);
printf("Simple Interest = %d",si); 
return 0;
}
//Function with arguments and return type
int computeSimpleInterest(int p, int r,int t){
return (p*r*t)/100;
}
//Function with no argument but return type
int convertToBinary(void){
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
int binary=0,place=1;
while(num!=0){
    int rem = num%2;
binary = rem*place+binary;
num=num/2;
place=place*10;
}
return binary;
}
//Function with no argument and no return type
void getMessage(void){
    printf("");
}