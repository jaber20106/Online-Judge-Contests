#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        vector<int> v2(n);
        for(int i = 0; i < n; i++){
            cin >> v2[i];
        }

        int it = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] > v2[i]){
                it += v[i] - v2[i];
            }
        }

        cout<<it+1<<endl;
    }

    return 0;
}
