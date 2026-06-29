#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int s = 0;
    for (int i=1;i<=a;i++) {
        int b;
        scanf("%d",&b);
        if (b%2==1&&b%3==0) s+=b;
    }
    printf("%d",s);
    return 0;
}