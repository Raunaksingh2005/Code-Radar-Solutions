#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)%2!=0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}