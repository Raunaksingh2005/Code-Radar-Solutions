#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    switch(c){
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}
