#include <stdio.h>

int main() {
    // Please write your code here.
    int res=1;
    int a,b;
    scanf("%d%d",&a,&b);
    for (a;a<=b;a++) {
        res *=a;
    }
    printf("%d",res);
    return 0;
}