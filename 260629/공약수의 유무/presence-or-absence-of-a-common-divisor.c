#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d%d",&a,&b);
    int r=0;
    for (a;a<=b;a++) {
        if (1920%a==0 && 2880%a==0) {
            r=1;
        }
    }
    printf("%d",r);
    return 0;
}