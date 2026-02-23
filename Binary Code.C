#include <stdio.h>

int main() {
    int num, i = 0;
    int binary[32];   // Array to store binary digits (max 32 bits)

    printf("Enter a decimal number: 10");
    scanf("%d", &num);

    int original = num;   // Store original number

    // যদি number = 0 হয়
    if (num == 0) {
        printf("Binary: 0");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;   // Remainder (0 or 1)
        num = num / 2;         // Divide number by 2
        i++;
    }

    // Print binary number in reverse order
    printf("Binary of %d = ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}