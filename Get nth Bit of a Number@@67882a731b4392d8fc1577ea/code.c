#include <stdio.h>
int main() {
    int a;
    int n;
    scanf("%d%d", &a,&n);
    if (n <= 0 || n > sizeof(a) * 8) {
        printf("1\n");
        return 1;
    }
    if (a & (1 << (n - 1))) {
        printf("0\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}