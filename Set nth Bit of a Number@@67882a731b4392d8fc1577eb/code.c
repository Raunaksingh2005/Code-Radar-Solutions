#include <stdio.h>

int main() {
    int n, bit_position;
    scanf("%d", &n);
    scanf("%d", &bit_position);

    n = n | (1 << bit_position);

    // Print the result
    printf("%d\n", bit_position, n);

    return 0;
}
