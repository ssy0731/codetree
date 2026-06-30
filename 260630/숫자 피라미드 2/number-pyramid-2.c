#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int c= 1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (j<=i) {
                printf("%d ",c);
                c++;
            }
        }
        printf("\n");
    }
    return 0;
}