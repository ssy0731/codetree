#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,t;
    scanf("%d%d",&a,&b);
    int s=0;
    if (a>b) {
        t=a;
        a=b;
        b=t;
    }
    for (a;a<=b;a++) {
        if (a%5==0) s+=a;
    }
    printf("%d",s);
    return 0;
}