#include <iostream>
using namespace std;
int arr[10] = {3,4,5,1,2,8,11,12,6,48};
void quickSort(int l, int r){
    if(l >= r) return;
    int pivot = l;
    int i = l+1;
    int j = r;
    while(i <= j){
        while(i <= r && arr[i] <= arr[pivot]) i++;
        while(j > l && arr[j] >= arr[pivot])j--;
        if(i > j){
            int temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        }else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    quickSort(l,j-1);
    quickSort(j+1,r);
}
int main(){
    quickSort(0, 9); 
    for(int i=0;i<10;i++) cout << arr[i]<<" ";
}