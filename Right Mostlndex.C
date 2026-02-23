#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements: 10,20.20,30,40");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: 20");
    scanf("%d", &key);

    int low = 0, high = n - 1;
    int mid;
    int result = -1;   // Store rightmost index

    // Binary Search for Rightmost index
    while(low <= high) {

        mid = (low + high) / 2;

        if(arr[mid] == key) {
            result = mid;      // Store index
            low = mid + 1;     // Move right to find later occurrence
        }
        else if(arr[mid] < key) {
            low = mid + 1;     // Search right half
        }
        else {
            high = mid - 1;    // Search left half
        }
    }

    if(result != -1)
        printf("Right Most Index = %d", result);
    else
        printf("Element not found");

    return 0;
}