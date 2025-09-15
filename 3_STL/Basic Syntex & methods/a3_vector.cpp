#include<bits/stdc++.h>
#define nl "\n"
using namespace std;

void printVector(vector<int> v){
    cout<<v.size()<<"\n";
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

void initializeVector(){
    vector<int> v (5);//size of vector is 5 and initially all the index value is 0
    v.push_back(7);// insert an element in the last 
    printVector(v);
    vector<int> v1 (5, 7); // preinitialize with values (size, values of every index)
    v.pop_back();// remove last value
    vector<int> v2 = v; //-->O(n)
    /*
    copy the elemnt only not like array , array used to copy the pointer or the address of first element
    */
    vector<int> &v2 = v;// reference pass or both pointing same vector 
    
}

void referencePass(vector<int>&v){
    // passed the original not a copy
}

void stringVector(){
    vector<string>str;// can be any data type
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        str.push_back(s);
    }
    for(int i = 0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
}

int main(){
    //dynamic array -> size is not fixed here and size can be increased dynamically
    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printVector(v);
    // initializeVector();

    return 0;
}

void array_of_vector(){
    vector<int>v[10]; // 10 vector of 0 size v[1,......]
    for(int i = 0; i<10; i++){
        int n;
        cin>>n;
        for(int j = 0; j<n; j++){
            int x;
            cin>>x;
            v[i].push_back(x); // i th vector
        }
    }
    for(int i = 0; i<10; i++){
        printVector(v[i]);
    }
    cout<<v[0][0]; // access o th vector o th index element
}

void vector_of_vector(){
    
}