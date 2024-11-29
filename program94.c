#include<stdio.h>
int main()
{
long long milliseconds;
int hours,minutes,seconds;
printf("Enter time in milliseconds:");
scanf("%lld",&milliseconds);
hours=milliseconds/3600000;
milliseconds%=3600000;
minutes=milliseconds/60000;
milliseconds%=60000;
seconds=milliseconds/1000;
printf("%lld milliseconds is equal to %d hours,%d minutes and %d seconds\n",milliseconds,hours,minutes,seconds);
return 0;
}