void bubbleSort(int n){
    for (int i = 0;i<=n-2;i++){
        for (int j = 0;j<=n-i-2;j++){
            if (int arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = o;i<=n;i++){
        printf("%d",arr[i]);
    }
}