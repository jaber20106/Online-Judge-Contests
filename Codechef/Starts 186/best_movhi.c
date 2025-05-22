#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int a, b;
        int c = __INT_MAX__; 

        for (int i = 0; i < n; i++) {
            scanf("%d%d", &a, &b);
            if (a >= 7 && b < c) {
                c = b;
            }
        }

        if (c == __INT_MAX__) {
            printf("-1\n");
        } else {
            printf("%d\n", c);
        }
    }

    return 0;
}
