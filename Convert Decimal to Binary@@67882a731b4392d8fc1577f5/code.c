#include <stdio.h>

int main() {
    int n;
    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;  
        printf("%d", bit); 
    }
    printf("\n");

    return 0;
}
