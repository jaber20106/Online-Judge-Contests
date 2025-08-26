#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--){
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        long long sum = 0, mn = LLONG_MAX;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            mn = min(mn, a[i]);
        }
        sum += k * mn;

        cout << sum << "\n";
    }

    return 0;
}
