#include <stdio.h>

int main() {
    char a, c, e;
    int b, d, f;

    scanf(" %c %d", &a, &b);
    scanf(" %c %d", &c, &d);
    scanf(" %c %d", &e, &f);

    int m = 0, n = 0, o = 0;

    if (a == 'Y' && b >= 37) m = 1;
    if (c == 'Y' && d >= 37) n = 1;
    if (e == 'Y' && f >= 37) o = 1;

    if (m + n + o >= 2) {
        printf("E");
    } else {
        printf("N");
    }

    return 0;
}