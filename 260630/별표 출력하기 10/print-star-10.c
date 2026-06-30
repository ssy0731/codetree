#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=0;i<n*2;i++) {
        if (i%2==0) {
            for (int j = 0; j<(i/2)+1;j++) {
                printf("* ");
            }
        }
        else {
            for (int k = 0; k<n-(i-1)/2;k++) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}