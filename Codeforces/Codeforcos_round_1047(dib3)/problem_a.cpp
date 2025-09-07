#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;

        for (int i = 0; i < k; i++) {
            if (i == k-1 && (x-1)%3==0) {  // শুধু শেষ step এ odd branch নিব
                int prev = (x-1)/3;
                if (prev % 2 == 1) {
                    x = prev;
                    continue;
                }
            }
            x = x * 2;
        }

        cout << x << "\n";
    }
    return 0;
}
