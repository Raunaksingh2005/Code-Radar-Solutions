#include <stdio.h>

int main() {
    int a, b, bit_position;
    scanf("%d %d", &a, &b);
    scanf("%d", &bit_position);
    a = a | (1 << bit_position);
    b = b | (1 << bit_position);

    // Print the result
    printf("%d\n", bit_position, a);
    printf("%d\n", bit_position, b);

    return 0;
}
