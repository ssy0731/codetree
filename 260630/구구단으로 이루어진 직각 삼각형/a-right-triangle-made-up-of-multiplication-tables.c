#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i+j<=n+1) {
                printf("%d * %d = %d ",i,j,i*j);
                if (i+j==n+1) printf("\n");
                else printf("/ ");
            }
        }
    
    }
    return 0;
    return 0;
}