#include <iostream>
#include <set>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;

        set<int> collected;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            collected.insert(x);
        }

        int missing = M - collected.size();
        cout << missing << endl;
    }
    return 0;
}
