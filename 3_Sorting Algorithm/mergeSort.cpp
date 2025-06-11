#include<bits/stdc++.h>
using namespace std;

void mergeSort(int a[], int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        mergeSort(a, left, mid);
        mergeSort(a, mid+1, right);
        merge(a, left, mid, right);
    }
}

void merge(int a[], int left, int mid, int right){
    int l = mid - left + 1;
    int r = right - mid;
    int leftA[l];
    int rightA[r];
    for(int i = 0; i<l; i++){
        leftA[i] = a[left + i];
    }
    for(int j = 0; j<r; j++){
        rightA[j] = a[mid+1+j];
    }
    int i = 0, j = 0;
    
}

int main(){
    int n;
    cin>>n; 
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr, 0, arr.size()-1);
    return 0;
}