#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int b = 0; b<a;b++) {
        for (int i = a-b;i>0;i--) {
            printf("*");
        }
        for (int j=0;j<2*b;j++) {
            printf(" ");
        }
        for (int k=a-b;k>0;k--) {
            printf("*");
        }
        printf("\n");
    }
}