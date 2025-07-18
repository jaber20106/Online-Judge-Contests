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
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int flag = 0;
        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += arr[i];
            double avg = (double)sum / (i + 1);
 
            if(avg < 40.0){
                flag = 1;
                break;
            }
            
        }
        if(flag == 1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }

    return 0;
}