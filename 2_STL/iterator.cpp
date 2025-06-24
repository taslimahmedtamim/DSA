#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"


void vector_iterator(){
    vector<int>v = {1,2,3,4,5};
    
    vector<int>::iterator it;
    for(it = v.begin(); it!=v.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    
    for(int value : v){
        value++;
        cout<<value<<" ";
    }
    cout<<endl;

    for(int &value : v){
        value++;
        cout<<value<<" ";
    }
    cout<<endl;

}


void vectorPair_iterator(){
    vector<pair<int,int>> vp= {{1,2},{2,3}};
    // vector<pair<int,int>>::iterator it;
    // for(it = vp.begin(); it!=vp.end(); it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    for(auto &it : vp){
        cout<< it.first<<" "<<it.second<<endl;
    }
}

int main(){
    fastio;

    vectorPair_iterator();
    
    return 0;
}