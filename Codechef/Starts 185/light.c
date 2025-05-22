#include <stdio.h>
#include <stdlib.h> 

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int c, red = 0, blue = 0, undecided = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &c);
            if (c == 1)
                red++;
            else if (c == 2)
                blue++;
            else
                undecided++;
        }

        int diff = abs(red - blue);

        if (diff <= undecided && (undecided - diff) % 2 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
