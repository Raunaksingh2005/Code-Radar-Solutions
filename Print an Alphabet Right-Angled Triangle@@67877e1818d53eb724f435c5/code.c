#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(char i = a; i >= 1; i--){
        for(char j = 1; j <= i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}
