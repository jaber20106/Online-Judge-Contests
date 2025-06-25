#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int count1 = 0, count2 = 0;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if (x == 1) count1++;
            else count2++;
        }

        if (count1 == 0 || count2 == 0) {
            cout << 0 << endl;
        } else {
            int op1 = (count1 % 2 == 0) ? (count1 / 2) : ((count1 - 1) / 2 + 1);
            int op2 = count2;
            cout << min(op1, op2) << endl;
        }
    }

    return 0;
}
