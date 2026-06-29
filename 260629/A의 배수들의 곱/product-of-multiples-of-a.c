#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    int r=1;
    scanf("%d%d",&a,&b);
    for (int i=1;i<=b;i++) {
        if (i%a==0) r*=i;
    }
    printf("%d",r);
    return 0;
}