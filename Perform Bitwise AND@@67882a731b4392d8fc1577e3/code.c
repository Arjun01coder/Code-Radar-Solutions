#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    int orResult = a | b;
    int andResult = a & b;
    
    printf("Result of bitwise OR: %d\n", orResult);
    printf("Result of bitwise AND: %d\n", andResult);

    return 0;
}
