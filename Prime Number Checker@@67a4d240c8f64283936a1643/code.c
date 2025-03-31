int isPrime(int num){
    if(num==0 || num==1){
        return 0;
    }else{
        for (int i=2;i<=num-1;i++){
            if(num % i==0){
                return 0;
            }
        }
        return 1;
    }
}