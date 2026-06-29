#include <stdio.h>

int main() {
    // Please write your code here.
    int c=0;
    while(1) {
        int a;
        scanf("%d",&a);
        if (a%2==1) {
            continue;
        }
        else {
            printf("%d\n",a/2);
            c ++;
        }
        if (c==3) break;
    }
    return 0;
}