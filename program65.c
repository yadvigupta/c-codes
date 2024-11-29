#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pin;
    abc:
    printf("Enter your pin:");
    fflush(stdin);
    int z= scanf("%d",&pin);
    if(z==0)
    goto abc;
    printf("your pin is %d",pin);
return 0;
}
