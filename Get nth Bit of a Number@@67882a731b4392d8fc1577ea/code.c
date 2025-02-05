#include <stdio.h>

int main() {
    int num, n, bitValue;

    // Input from user
    scanf("%d", &num);

    scanf("%d", &n);

    // Validate the bit position
    if (n < 0 || n > 31) {
        printf("Invalid bit position! Enter a value between 0 and 31.\n");
        return 1;
    }

    // Retrieve the n-th bit
    bitValue = (num >> n) & 1;

    // Display the result
    printf("%d\n", n, num, bitValue);

    return 0;
}
