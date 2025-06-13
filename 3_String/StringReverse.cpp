#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    string str;
    string reverse_str;
    getline(cin , str);
    for(int i = str.size()-1; i>=0; i--){
        //reverse_str = reverse_str + str[i];
        reverse_str.push_back(str[i]);
    }
    cout<<reverse_str;

    return 0;
}