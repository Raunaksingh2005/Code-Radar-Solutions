#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int flipped = ~n + 1;
    printf("%d\n", flipped);
    
    return 0;
}
