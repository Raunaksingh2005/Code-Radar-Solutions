#include <stdio.h>
void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];  // Declare array of size n
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read input
    }

    bubblesort(arr, n);  // Sort the array

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print sorted array
    }
    
    return 0;
}
