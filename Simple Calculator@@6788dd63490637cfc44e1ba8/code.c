#include <stdio.h>

int main() {
    int a, b;
    char c;

    // Take input for two integers and a character
    scanf("%d%d%c", &a, &b, &c);

    // Switch statement to check which operation to perform
    switch(c) {
        case '+':  // Addition
            printf("%d\n", a + b);
            break;
        case '-':  // Subtraction
            printf("%d\n", a - b);
            break;
        case '*':  // Multiplication
            printf("%d\n", a * b);
            break;
        case '/':  // Division
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("Division by zero error\n");
            }
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}

