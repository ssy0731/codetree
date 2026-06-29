#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    int res=1;
    scanf("%d%d",&a,&b);
    for (int i=1;i<=b;i++) {
        res*=a;
    }
    printf("%d",res);
    return 0;
}