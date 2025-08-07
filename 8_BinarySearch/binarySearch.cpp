#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

// only works in a sorted array

int binarySearch(vector<int>& v, int target){
    
    int low = 0, high = v.size() - 1;
    while(low<=high){
        int mid = low + (high-low)/2; // mid = (low + high)/2; when high is to large it can give overflow
        if(v[mid]==target){
            return mid;
        }
        else if(target>v[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}


int main(){
    fastio;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int value;
    cin>>value;

    int b = binarySearch(arr, value);
    if(b==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at Index : "<<b<<endl;
    }
    return 0;
}

// no stack overflow risk & space complexity : O(1)
// Time complexity : O(log n)