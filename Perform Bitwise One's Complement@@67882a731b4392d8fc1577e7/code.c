#include <stdio.h>

int main() {
    int num;

    // Input from user
    scanf("%d", &num);

    // Performing one's complement
    int result = ~num;

    // Printing the result
    printf("%d:\n", num, result);

    return 0;
}
