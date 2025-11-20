#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        long long v1 = v[0];
        long long vn = v[n-1];

        if(v1 == -1 && vn == -1){
            v1 = vn = 0;
            v[0] = 0;
            v[n-1] = 0;
        }
        else if(v1 == -1){
            v1 = vn;
            v[0] = v1;
        }
        else if(vn == -1){
            vn = v1;
            v[n-1] = vn;
        }

        for(int i = 0; i < n; i++){
            if(v[i] == -1) v[i] = 0;
        }
        long long ans = llabs(vn - v1);
        cout<<ans<<endl;
        for (int i = 0; i < n; i++) {
            cout << v[i] << (i+1 < n ? ' ' : '\n');
        }
    }
    
    return 0;
}