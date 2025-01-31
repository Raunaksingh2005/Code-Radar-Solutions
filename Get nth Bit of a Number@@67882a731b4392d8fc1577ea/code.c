#include <stdio.h>
int main() {
    int a;
    int n;
    scanf("%d%d", &a,&n);
    if (a & (1 << (n - 1))) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    
    return 0;
}