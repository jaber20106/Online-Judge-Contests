#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int x = a - c;
    int y = b - d;

    printf("%d %d\n", x, y);

    return 0;
}
