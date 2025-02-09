#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a <= 1) {
        printf("Not Prime");
    }
    else if (a%a==0) {
        printf("Prime");
    }
    // else if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0 || a % 11 == 0) {
    //     printf("Not Prime");
    }
    else {
        printf("Prime");
    }

    return 0;
}
