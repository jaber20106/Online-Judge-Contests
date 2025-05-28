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
        
        int odd_sum = 0;
        int even_sum = 0;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                odd_sum += arr[i];  
            } else {
                even_sum += arr[i]; 
            }
        }
        cout << max(odd_sum, even_sum) << endl;
    }
}