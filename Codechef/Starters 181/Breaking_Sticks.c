#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, a[100];
        scanf("%d", &n);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }

        int breaks = sum - n;
        printf("%d\n", breaks);
    }

    return 0;
}
