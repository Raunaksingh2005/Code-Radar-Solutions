#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    return a & ~(1 << b);
    printf("%d\n");
    
    return 0;

}