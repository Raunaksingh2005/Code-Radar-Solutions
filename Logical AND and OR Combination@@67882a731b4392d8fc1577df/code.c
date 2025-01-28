#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    switch (a>0||b<0) {
        case 1:
            printf("True\n");
            break;
        case 0:
            switch (a==0 && b == 0) {
                case 1:
                    printf("True\n");
                    break;
        default:
            printf("False\n");
            break;
            }
            break;
    }
    return 0;
}