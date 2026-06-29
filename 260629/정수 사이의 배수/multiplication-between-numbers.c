#include <stdio.h>

int main() {
    // Please write your code here.
    int s=0,c=0;
    int a,b;
    scanf("%d%d",&a,&b);
    for (a;a<=b;a++) {
        if (a%5==0 || a%7==0) {
            s+=a;
            c++;
        }
    }
    printf("%d %.1lf",s,(double)s/c);
    return 0;
}