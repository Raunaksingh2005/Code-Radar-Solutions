#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // Find the lowest set bit using n & -n
    int lowest_set_bit = n & -n;

    // Print the result
    printf("%d\n", lowest_set_bit);

    return 0;
}
