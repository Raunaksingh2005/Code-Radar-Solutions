#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    // Find the lowest set bit of both numbers
    int lowest_set_bit_a = a & -a;
    int lowest_set_bit_b = b & -b;

    // Output the results
    printf("Lowest set bit of %d: %d\n", a, lowest_set_bit_a);
    printf("Lowest set bit of %d: %d\n", b, lowest_set_bit_b);

    return 0;
}
