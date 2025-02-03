#include <stdio.h>

int main() {
    int a,c=0;
    scanf("%d",&a);
    while((a&1)==0){
        a=a>>1;
        c++;
    }
    printf("%d",c);
    return 0;
}