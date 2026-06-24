#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b, c, d;
    c = 0;
    d = 0;
    scanf("%d%d",&a,&b);
    if (a<b) c = 1;
    if (a==b) d = 1;
    printf("%d %d",c,d);
    return 0;
}