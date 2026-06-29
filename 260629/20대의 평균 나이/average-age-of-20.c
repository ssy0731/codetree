#include <stdio.h>

int main() {
    // Please write your code here.
    int c = 0, s = 0;
    while (1) {
        int a;
        scanf("%d",&a);
        if (a<20 || a>=30) break;
        s += a;
        c++;
    }
    printf("%.2lf",(double)s/c);
    return 0;
}