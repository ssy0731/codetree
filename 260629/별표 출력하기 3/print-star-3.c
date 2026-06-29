#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i = 0; i<a; i++) {
        for (int j = 0; j<i; j++) {
            printf("  ");
        }
        for (int k = 2*a-2*i-1;k>0;k--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}