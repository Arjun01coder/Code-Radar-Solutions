void factorialRange(int n, int m){
    for (i=n;i<=m;i++){
        int fact = 1;
        for (int j = 1;j<=i;j++){
            printf("%d\n",fact);
        }
    }
    return 0;
}