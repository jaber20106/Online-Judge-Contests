#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++){
             cin>>arr[i];
        }

        int pos = 1;
        int curr_max = arr[0];

        for (int i = 1; i < n; i++){
            if(arr[i] > curr_max){
                curr_max = arr[i];
                pos = i + 1; 
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}
