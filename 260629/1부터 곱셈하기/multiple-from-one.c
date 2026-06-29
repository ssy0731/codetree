#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int c = 1;
    for (int i = 1;i<=10;i++) {
        c *= i;
        if (c>=a) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}