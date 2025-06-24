#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    fastio;
    
    // vector<vector<int>> v(6, vector<int>(6));  // 6x6 matrix
    vector<vector<int>> v;
    for(int i = 0; i<6; i++){
        vector<int>temp;
        for(int j = 0; j<6; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}