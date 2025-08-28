#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        long long N, M;
        cin >> N >> M;

        if(N == 0) {
            // Only ">>"
            string ans = ">";
            for(long long i=1;i<M;i++) ans += "=>>";
            cout << ans << "\n";
        }
        else if(M == 0) {
            // Only "<<"
            string ans = "<";
            for(long long i=1;i<N;i++) ans += "=<<";
            cout << ans << "\n";
        }
        else {
            // Both present
            string ans;
            for(long long i=0;i<N;i++) ans += "<";
            ans += ">";
            for(long long i=0;i<M;i++) ans += ">";
            cout << ans << "\n";
        }
    }
}
