int linearSearch(int arr[],int size,int k){
    for(int i=0;i<size;i++){
        if(arr[i] == k) return i;
    }
    return -1;
}