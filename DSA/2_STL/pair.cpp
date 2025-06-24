#include<bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int, string> p;
    // p = make_pair(7, "Tamim");
    // p = {7, "Tamim"};
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<"\n";

    
    pair<int, string> p1 = p; // make a copy
    pair<int, string> &p2 = p; // reference 
    p2.first = 1;
    cout<<p.first;

    // pair array
    pair<int, int> p_arr[3];
    p_arr[0] = {1,2};
    p_arr[1] = {3,4};
    p_arr[2] = {5,6};
    for(int i = 0; i<3; i++){
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<"\n";
    }

    pair<pair<int,int>,string> par;
    par.first.first = 0;
    par.first.second = 7;
    par.second = "Tamim"; 
    return 0;
}

void vector_pair(){
    vector<pair<int, int>> v;
    // vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));
    }
    printVector(v);
}

void printVector(vector<pair<int,int>>&v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";

    }
}