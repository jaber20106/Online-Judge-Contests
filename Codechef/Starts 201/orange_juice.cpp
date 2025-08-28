#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        int maxJuice = 0;
        for (int syrup = 0; syrup <= a; syrup++) {
            int water = 2 * syrup;
            if (water <= b) {
                maxJuice = max(maxJuice, syrup + water);
            }
        }
        cout << maxJuice << endl;
    }
    return 0;
}
