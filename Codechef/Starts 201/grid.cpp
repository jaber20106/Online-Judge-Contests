#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    vector<long long> results;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        long long total = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                total += (i + 1);
            }
        }
        results.push_back(total);
    }
    
    for (long long res : results) {
        cout << res << "\n";
    }
    
    return 0;
}