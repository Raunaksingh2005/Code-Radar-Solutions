#include <stdio.h>

int main() {
    int a, n;
    scanf("%d%d", &a, &n);  // Input the number and the bit position
    
    // Check if n is within a valid range for an int (1 to 32 for a 32-bit int)
    if (n <= 0 || n > sizeof(a) * 8) {
        printf("1\n");  // Invalid bit position
        return 1;       // Exit early
    }
    
    // Check if the n-th bit is set (1) or not set (0)
    if (a & (1 << (n - 1))) {
        printf("0\n");  // Bit is set
    } else {
        printf("1\n");  // Bit is not set
    }

    return 0;
}