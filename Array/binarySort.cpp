#include <bits/stdc++.h>
using namespace std;

void binarySort(int arr[], int n){
    int i, zeroes, ones = 0;
    
    for(i=0; i<n; i++)
        if(arr[i]==1) ones++;
        
    zeroes = n - ones;
    
    i = 0;
    while(zeroes--){
        arr[i] = 0;
        i++;
    }
    
    while(ones--){
        arr[i] = 1;
        i++;
    }
    
     for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main() {
    
    int arr[] = {1, 1, 0, 0, 1, 1, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    binarySort(arr, n);

    return 0;
}
