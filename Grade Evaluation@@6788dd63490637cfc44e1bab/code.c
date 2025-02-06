#include <stdio.h>
int main(){
    char x;
    scanf("%s",&x);
    if (x == 'A'){
        printf("Excellent");
    }else if(x=='B'){
        printf("Good");
    }else if(x=='B'){
        printf("Average");
    }else if(x=='C'){
        printf("Below Average");
    }else if(x=='D'){
        printf("Fail");
    }
    return 0;
}
