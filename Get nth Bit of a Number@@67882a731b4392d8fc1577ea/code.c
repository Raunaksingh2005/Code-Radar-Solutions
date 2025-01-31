#include <stdio.h>
int main() {
    int a;
    int n;
    scanf("%d%d", &a,&n);
    if (a & (n << (sizeof(a) * 8 - 1))) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    
    return 0;
}