#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {5,3,2,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n); // O(nlogn)

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}