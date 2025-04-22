    #include <stdio.h>
    int main() {
        int N, i;
        scanf("%d", &N);

        int A[N];
        for (i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }


        for (i = 0; i < N - 1; i++) {
            if (A[i] >= A[i + 1]) {
                printf("No\n");
                return 0;
            }
        }

        printf("Yes\n");
        return 0;
    }

