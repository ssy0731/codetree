#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m,a;
    scanf("%d %d",&n,&m);
    printf("%d %d ",n,m);
    for (int i=0; i<8; i++) {
        int a=n+m;
        printf("%d ",a%10);
        n = m;
        m = a;
    }
    return 0;
}