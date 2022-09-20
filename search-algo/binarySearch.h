int binarySearch(int arr[], int s, int e,int k){
    if(s > e) return -1;
    int mid = (s+ e)/2;
    if(arr[mid] == k) return mid;

    if(arr[mid] > k)
        return binarySearch(arr,s,mid-1,k);
    else
        return binarySearch(arr,mid+1,e,k);
}