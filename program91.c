#include <stdio.h>

int main() {
    int a = -3;  // In binary (32-bit two's complement): 11111111111111111111111111111101
    int result = a << 2;  // Left shift by 2
    
    printf("Result of %d << 2 = %d\n", a, result);
    
    return 0;
}
