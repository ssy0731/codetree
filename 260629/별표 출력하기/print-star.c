#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++) {
        for (int j=0;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int k=a-1;k>0;k--) {
        for (int l=k;l>0;l--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}