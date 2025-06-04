#include<bits/stdc++.h>
using namespace std;

void reverseNum(int n){
    int s = 0;
    while(n>0){
        int rem = n%10;
        s = (s*10) + rem;
        n=n/10;
    }
    cout<<s;
}

int main(){
    int n;
    cin>>n;
    reverseNum(n);
    return 0;
}