#include <iostream>
#include "./linearSearch.h"
#include "./binarySearch.h"
using namespace std;

int main(){
    int arr[10] = {1,3,2,5,6,7,8,9};
    int k;
    cin >> k;
    // int ans = linearSearch(arr,10,k);
    // if(ans == -1) cout << "Fail Search";
    // else cout << "index is "<<ans<<"!";
    int ans = binarySearch(arr,0,9,k);
    cout << ans;
}