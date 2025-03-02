#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a); // Taking input for the size of the square

    // Outer loop for each row
    for(int i=1; i<=a; i++) {
        // Inner loop for each column in the row
        for(int j=1; j<=a; j++) {
            // Print '*' on the border or at the first or last row/column
            if(i == 1 || i == a || j == 1 || j == a) {
                printf("*");
            } else {
                // Print space inside the hollow square
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
