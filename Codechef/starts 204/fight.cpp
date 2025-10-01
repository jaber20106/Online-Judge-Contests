#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int minimum = n - 2;
        if (n == 2) minimum = 0;
        int maximum = (n - 1) * (n - 2) / 2;
        cout << minimum << " " << maximum << endl;
    }
    return 0;
}
