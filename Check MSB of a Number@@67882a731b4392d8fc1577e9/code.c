#include <stdio.h>

int main() {
    int num;

    // Input from user
    scanf("%d", &num);

    // Check if MSB is set
    if (num & (1 << 31))
        printf("Set", num);
    else
        printf("Not Set", num);

    return 0;
}
