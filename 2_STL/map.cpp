#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"

int main(){
    fastio;

    
    map<string, int> m;
    // m.insert({"Tamim",7});
    // m["Tamim"] = 7;
    int n;
    cin>>n;

    // for(int i = 0; i<n; i++){
    //     string s;
    //     cin>>s;
    //     m[s]++;
    // }
    
    for(int i = 0; i<n; i++){
        string s;
        int t;
        cin>>s>>t;
        m.insert({s,t}); 
    }
    for(auto &it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}