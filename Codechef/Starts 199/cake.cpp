#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cin>>a>>b;
    int x = a * b;
    int y = min(a,b);
    cout<<x - y<<endl;
    
    return 0;
}