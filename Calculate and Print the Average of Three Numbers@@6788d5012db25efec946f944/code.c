#include <stdio.h>

int main() {
    int a,b,c,average;
    scanf("%f %f %f",&a,&b,&c);
    average = a + b + c/3;
    printf("Average: %f",average);
    return 0;
}