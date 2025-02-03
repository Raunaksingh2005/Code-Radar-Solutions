#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Get the lowest set bit
    int lowest_set_bit = num & -num;

    printf("%d\n", lowest_set_bit);

    return 0;
}
