#include <stdio.h>

int main() {
    int a, b;

    // Read two numbers from user input
    scanf("%d %d", &a, &b);

    // Swap using XOR
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    // Print the swapped numbers
    printf("%d %d\n", a, b);

    return 0;
}
