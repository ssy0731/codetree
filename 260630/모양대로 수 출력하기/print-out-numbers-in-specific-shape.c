#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i<=j) printf("%d ",n-j+1);
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}