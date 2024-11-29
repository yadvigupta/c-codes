#include <stdio.h>
int main()
{
    int pin;
    printf("Enter your pin:");
    scanf("%d",&pin);
    if(pin>999)
    {
        printf("It is valid\n");
        goto xyz;
    }
    else 
    {
        xyz:
        printf("It is not valid.");
    }
    
return 0;
}
