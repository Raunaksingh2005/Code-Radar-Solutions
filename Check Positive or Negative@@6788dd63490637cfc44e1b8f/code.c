#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Input the integer
    
    // Check if the number is positive, negative, or zero
    if (a > 0) {
        printf("Positive");
    } else if (a < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }

    return 0;
}
