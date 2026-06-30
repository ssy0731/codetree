#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d * %d = %d", i+1, j+1, (i+1)*(j+1));
            if (j<n-1) printf(", ");
        }
        printf("\n");
    }
    return 0;
}