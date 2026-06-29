#include <stdio.h>

int main() {
    // Please write your code here.
    while(1) {
        int a,b;
        char c;
        scanf("%d %d %c",&a,&b,&c);
        printf("%d\n",a*b);
        if (c=='C') {
            break;
        }

    }
    return 0;
}