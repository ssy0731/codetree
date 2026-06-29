#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int a = 0; a<n; a++) {
        for (int i = n-a-1; i>0; i--) {
            printf("  ");
        }
        for (int j = 0; j<=a; j++) {
            printf("@ ");
        }
        printf("\n");
    }
    for (int b = 0; b<n-1; b++) {
        for (int c = n-b-1; c>0; c--) {
            printf("@ ");
        }
        printf("\n");
    }
    return 0;
}