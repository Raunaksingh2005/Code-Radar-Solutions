#include <stdio.h>
int main() {
    unsigned b,a;
    scanf("%u",&b);
    while(b!=0){
        a++;
        b=b>>1;
    }
    printf("%u", 32-a);
    return 0;
}