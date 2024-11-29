//WAP to enter  basic salary from the user .Write the program to calculate total salary on the following  conditions:
/* Basic Salary         DA  HRA
    <=2000              10% 20%
 >2000 && <=5000        20% 30%
 >5000 && <=10000       30% 40%
    >10000              50% 50%
*/   
#include <stdio.h>
#include<math.h>
int main()
{
int BS,GS;
printf("Enter the value of BS=");
scanf("%d",BS);
if(BS<=2000)
{
GS=BS+BS*0.1+BS*0.2;
printf("total amount=%d",GS);
}
else if(BS>2000 && BS<=5000)
{
GS=BS+BS*0.2+BS*0.3;
printf("total amount=%d",GS);
}
else if(BS>5000 && BS<=100000)
{
GS=BS+BS*0.3+BS*0.4;
printf("total amount=%d",GS);
}
else
{
GS=BS+BS*0.5+BS*0.5;
printf("total amount=%d",GS);
}
return 0;
}