#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        if(a%2==0) a=1
        else a=0
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
