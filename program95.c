#include <stdio.h>
int main()
{
int amount;
printf("Enter the amount :");
scanf("%d",&amount);
int denominations[]={500,100,50,20,10,5,2,1};
int i,count;
printf("Minimum number of notes required:\n");
for(i=0;i<8;i++){
count=amount/denominations[i];
amount =amount%denominations[i];
if(count>0){
printf("Rs %d : %d notes\n",denominations[i],count);
}
}
return 0;
}

