#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        char S[20]; // 10 is max, so 20 is safe
        scanf("%s", S);

        int boys = 0, girls = 0;
        int entered = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == 'B') {
                boys++;
            } else if (S[i] == 'G') {
                girls++;
            }

            if (girls == 0 && boys > 0) {
                break;
            }

            if (girls > 0 && boys > 2 * girls) {
                break;
            }

            entered++;
        }

        printf("%d\n", entered);
    }

    return 0;
}
