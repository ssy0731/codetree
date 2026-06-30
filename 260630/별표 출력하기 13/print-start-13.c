#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int a=0; a<2*n;a++) {
        if (a%2==0) {
            for (int i=0;i<n-(a/2);i++) {
                printf("* ");
            }
        }
        else {
            for (int j=0; j<(a+1)/2;j++) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}