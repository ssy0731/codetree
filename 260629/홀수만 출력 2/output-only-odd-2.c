#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d%d",&a,&b);
    for (a;a>=b;a-=2)
        printf("%d ",a);
    return 0;
}