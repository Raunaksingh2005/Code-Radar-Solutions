#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    // Toggle the nth bit using XOR
    a = a ^ (1 << b);
    
    printf("%d", a);
    
    return 0;
}
