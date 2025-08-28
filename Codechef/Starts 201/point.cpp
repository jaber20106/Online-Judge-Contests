#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        bool possible = true;
        for (int i = 0; i < n; ) {
            if (s[i] == '1') {
                int j = i;
                while (j < n && s[j] == '1') j++;
                int len = j - i;
                if (len == 1 || len == 2) {
                    possible = false;
                    break;
                }
                i = j;
            } else {
                i++;
            }
        }

        cout << (possible ? "Yes" : "No") << endl;
    }
    return 0;
}
