// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            printf(" ");
        }
        //1st half
        for(int k=0; k<i+1;k++){
            printf("*");
        }
        //2nd half
        for(int m=i-1; m>=0; m--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}