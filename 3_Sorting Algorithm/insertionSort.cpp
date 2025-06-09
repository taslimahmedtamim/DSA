#include<bits/stdc++.h>
using namespace std;

void insertionSort_DecreasingOrder(int n, int arr[]){
    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort_NonDecreaseingOrder(int n, int arr[]){

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    insertionSort_DecreasingOrder(n, arr);
    insertionSort_NonDecreaseingOrder(n, arr);

    return 0;
}