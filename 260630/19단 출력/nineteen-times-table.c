#include <stdio.h>

int main() {
    // Please write your code here.
    int n=19;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            printf("%d * %d = %d ",i,j,i*j);
            if (j%2==0 || j==19) printf("\n");
            else printf("/ ");
        }
    }
    return 0;
    return 0;
}