#include <stdio.h>

int main() {
    // Please write your code here.
    int r = 1;
    for (int i = 1; i<=5;i++) {
        int a;
        scanf("%d",&a);
        if (a%3!=0) r=0;
    }
    printf("%d",r);
    return 0;
}