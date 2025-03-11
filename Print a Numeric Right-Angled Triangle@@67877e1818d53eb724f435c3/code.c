#include<stdio.h>
int main(){
    int i,j,N,count=1;
    for (i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}