#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num ; // Binary: 11101
    int n ;    // Clear the 2nd bit

    num = clearNthBit(num, n);
    
    printf("Number after clearing %dth bit: %d\n", n, num);
    
    return 0;
}
