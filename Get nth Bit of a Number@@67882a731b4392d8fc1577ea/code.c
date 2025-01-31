#include <stdio.h>
#include <limits.h>  // For INT_MAX (to get the maximum bit position for int)

void print_binary(int num) {
    // Print the binary representation of a number
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int a, n;
    scanf("%d%d", &a, &n);  // Input the number and the bit position
    
    // Check if n is within a valid range for an int (1 to 32 for a 32-bit int)
    if (n <= 0 || n > sizeof(a) * 8) {
        printf("1\n");  // Invalid bit position
        return 1;       // Exit early
    }

    // Print debug information to help us see what's going on
    printf("Input a = %d\n", a);
    printf("Binary of a: ");
    print_binary(a);  // Debug: Print the binary representation of a
    printf("Checking bit position n = %d\n", n);

    // Check if the n-th bit is set (1) or not set (0)
    if (a & (1 << (n - 1))) {
        printf("0\n");  // Bit is set
    } else {
        printf("1\n");  // Bit is not set
    }

    return 0;
}
