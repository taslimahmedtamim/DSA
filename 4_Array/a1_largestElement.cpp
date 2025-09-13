#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    fastio;

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int largest = INT_MIN;

    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"Largest element : "<<largest<<endl;
    return 0;
}

// Time complexity : O(n)