#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int last = -1,cnt = 0;
        for(int i=0; i<n; i++) {
            int p = a[i]%2;
            if(last == -1 || p != last) {
                cnt++;
                last = p;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
