#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int l,r;
    cin>>l>>r;
    if(l > r){
        cout<<l-r<<endl;
    }
    else{
        cout<<r-l<<endl;
    }

    return 0;
}