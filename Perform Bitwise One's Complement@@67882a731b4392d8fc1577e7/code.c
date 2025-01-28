#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int result = ~a;
    printf("The bitwise one's complement of %d is %d\n", a, result);
    
    return 0;
}