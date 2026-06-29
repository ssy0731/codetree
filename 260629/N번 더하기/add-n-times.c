#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d%d",&a,&b);
    for (int i = 1;i<=b;i++) {
        a += b;
        printf("%d\n",a);
    }
    return 0;
}