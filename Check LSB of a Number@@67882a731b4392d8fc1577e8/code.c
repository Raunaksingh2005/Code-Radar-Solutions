#include <stdio.h>

int main() {
    int a;
    // Read the input value
    scanf("%d", &a);
    
    // Check the least significant bit
    if (a & 1) {
        printf("1\n");  // LSB is 1 (odd number)
    } else {
        printf("0\n");  // LSB is 0 (even number)
    }
    
    return 0;
}