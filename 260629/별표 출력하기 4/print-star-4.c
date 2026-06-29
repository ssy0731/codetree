#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i=a;i>0;i--) {
        for (int j=i;j>0;j--) {
            printf("* ");
        }
        printf("\n");
    }
    for (int k=1;k<a;k++) {
        for (int l=0;l<=k;l++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}