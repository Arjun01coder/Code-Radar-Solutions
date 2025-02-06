#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (x%3==0){
        printf("Divisible by 3");
    }else if(x%5==0){
        printf("Divisible by 5");
    }else if(x%3==0 %% x%5==0){
        printf("Divisible by Both");
    }else{
        Printf("Not Divisible");
    }
    return 0;
}