#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int m = 0; m<a; m++) {
        for (int i = 0; i < a-m-1; i++) {
            printf(" ");
        }
        for (int j = 0; j < m+1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int n=0; n<a-1; n++) {
        for (int x = 0; x<=n; x++) {
            printf(" ");
        }
        for (int y=0; y<a-n-1; y++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}