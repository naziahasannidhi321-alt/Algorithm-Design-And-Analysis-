#include <stdio.h>

int main() {
    int n, key, i;

    printf("Enter number of elements: 5");
    scanf("%d", &n);

    int arr[n];   // Array declaration

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value to search
    printf("Enter value to search:30");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d", i);
            return 0;   // Stop program when found
        }
    }

    // If element not found
    printf("Element not found");

    return 0;
}
