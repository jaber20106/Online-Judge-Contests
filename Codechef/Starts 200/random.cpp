#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        if(n == 2){
            cout << "aa\n";
        }
        else if(n == 4) {
            cout<<"abaa"<<endl;
        }
        else{
            string pattern = "abcde"; // 5 letters max → f(S) ≤ 5
            string s = "";
            for(int i = 0; i < n; i++) {
                s += pattern[i % 5];
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
