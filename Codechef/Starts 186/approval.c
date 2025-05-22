#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a[5], i, j, temp, sum = 0, bribes = 0;

        for (i = 0; i < 5; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }

        for (i = 0; i < 5 - 1; i++) {
            for (j = 0; j < 5 - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

    
        i = 0;
        while (sum < 35 && i < 5) {
            sum += (10 - a[i]);
            bribes++;
            i++;
        }

        printf("%d\n", bribes * 100);
    }

    return 0;
}
