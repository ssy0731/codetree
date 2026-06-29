#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int x = 1, c=0;
    while (a != x) {
        x *= 2;
        c += 1;
    }
    printf("%d",c);
    return 0;
}