#include <stdio.h>

int main() {
    // Please write your code here.
    int s =0;
    for (int i=0;i<10;i++) {
        int a=0;
        scanf("%d ",&a);
        if (i==2||i==4||i==9) {
            s+=a;
        }
    }
    printf("%d",s);
    return 0;
}