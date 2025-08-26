#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, c;
        cin >> n >> c;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int same = 0, less = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == c) same++;
            else if(arr[i] < c) less++;
        }

        int extra = 0;
        while(true){
            if(same == 0 && less > 0){
                break;
            }
            extra++;
            same = 0;
            less = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] == c + extra) same++;
                else if(arr[i] < c + extra) less++;
            }
        }

        cout << extra << endl;
    }

    return 0;
}
