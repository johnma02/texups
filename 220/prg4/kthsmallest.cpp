#include <iostream>
#include <algorithm>
using namespace std;
int k;
int partition(int arr[], int low, int high){
    int pivot = arr[high]; 
    int i = (low-1);

    for(int j = low; j <= high - 1; j++){
        if (arr[j] < pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;

}

void quickSelect(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        if(pi == k){
            cout << arr[pi] << '\n';
            return;
        }
        else if(pi > k){
            quickSelect(arr, low, pi-1);
        }
        else{
            quickSelect(arr, pi+1, high);
        }
    }
    else cout << arr[low] << '\n';
}

int main(){
    int arr[] = {10,7,8,9,1,5,2,53,34,21,11,10,18,0,43,100,4,99};
    //0 1 2 4 5 7 8 9 10 10 11 18 21 34 43 53 99 100
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cin >> k;
    k--;
    quickSelect(arr, 0, n - 1);
    return 0;
}


