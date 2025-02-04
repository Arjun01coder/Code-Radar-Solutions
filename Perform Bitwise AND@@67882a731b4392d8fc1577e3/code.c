#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int result = a | b;
    int andResult = a & b;
    printf("%d\n", result);
    printf("%d\n", andResult);

    return 0;
}
