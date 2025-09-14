#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

void bruteForce(int arr[], int n){
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += arr[j];
            if(sum>maxSum){
                maxSum = sum;
            }
        }
    }

    cout<<maxSum<<endl;
}   // Time complexity : O(n^2)


void kadanesAlgo(int arr[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
        maxSum = max(sum, maxSum);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<maxSum<<endl;
}  // Time complexity : O(n)


int main(){
    fastio;

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    // bruteForce(arr, n);
    kadanesAlgo(arr, n);

    return 0;
}


