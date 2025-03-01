#include<stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    for(char i = a; i >= 1; i--){
        for(char j = 1; j <= i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}
