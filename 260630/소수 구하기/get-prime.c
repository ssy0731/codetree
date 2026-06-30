#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++) {
        int c=0;
        for (int j=1; j<=i; j++) {
            if (i%j==0) {
                c++;
            }
        }
        if (c==2)
            printf("%d ",i);
    }
    return 0;
}