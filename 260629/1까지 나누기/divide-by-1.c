#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int c = 0,b=a;
    for (int i = 1;i<=b;i++) {
        a /= i;
        c++;
        if (a<=1) {
            printf("%d",c);
            break;
        }
    }
    return 0;
}