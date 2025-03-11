#include<stdio.h>
int main(){
    int i,j,N;
    scanf("%d",&N);
    for (i=1;i<=N;i++)
    int count =1;
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}