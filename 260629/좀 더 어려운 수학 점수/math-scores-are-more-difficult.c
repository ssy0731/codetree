#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a==c)
        if (b>d) printf("A");
        else printf("B");
    else if (a>c) printf("A");
    else printf("B");
    return 0;
}