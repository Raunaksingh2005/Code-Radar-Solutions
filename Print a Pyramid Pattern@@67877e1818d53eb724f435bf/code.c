#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a); // Taking input for the number of rows

    // Outer loop to control the number of rows
    for(int i=1; i<=a; i++) {
        // Print spaces before stars in each row
        for(int j=1; j<=a-i; j++) {
            printf(" ");
        }

        // Print stars in each row
        for(int j=1; j<=2*i-1; j++) {
            printf("*");
        }

        // Move to the next line after printing stars
        printf("\n");
    }

    return 0;
}
