#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a); // Taking input for the number of rows

    // Outer loop for each row
    for(int i=1; i<=a; i++) {
        // Inner loop for spaces before stars
        for(int j=1; j<=a-i; j++) {
            printf(" "); // Print spaces before the stars
        }
        // Inner loop for printing stars
        for(int j=1; j<=i; j++) {
            printf("*"); // Print stars
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
