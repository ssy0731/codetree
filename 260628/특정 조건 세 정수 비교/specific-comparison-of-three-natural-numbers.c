#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if (a<=b && a<=c)
        d = a;
    else if (b<=a && b<=c)
        d = b;
    else if (c<=a && c<=b)
        d = c;
    printf("%d ",a==d);
    printf("%d",a==b && a==c);
    return 0;
}