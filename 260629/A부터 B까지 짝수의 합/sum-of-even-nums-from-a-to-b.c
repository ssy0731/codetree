#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d%d",&a,&b);
    int s = 0;
    for (a;a<=b;a++) {
        if (a%2==0) s+=a;
    }
    printf("%d",s);
    return 0;
}