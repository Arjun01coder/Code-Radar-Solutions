#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int result = a | b;
    printf("Result of bitwise OR: %d\n", result);

    return 0;
}
