#include<bits/stdc++.h>
using namespace std;

void inbuilt_reverse(){
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout<<str<<endl;
}

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
    // inbuilt_reverse();
    return 0;
}