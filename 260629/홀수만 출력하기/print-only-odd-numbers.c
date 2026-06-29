#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d",&a);
    for (int i = 1; i<=a; i++) {
        scanf("%d",&b);
        if (b%2==1 && b%3==0) printf("%d\n",b);
    }
    return 0;
}