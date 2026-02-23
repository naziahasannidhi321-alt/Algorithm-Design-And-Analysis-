#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements:5");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort starts
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {

            // Compare adjacent elements
            if(arr[j] > arr[j + 1]) {
                // Swap if they are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}