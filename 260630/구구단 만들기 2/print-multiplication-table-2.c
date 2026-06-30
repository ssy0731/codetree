#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=2; i<=8; i+=2) {
        for (int j=m; j>=n; j--) {
            printf("%d * %d = %d ", j, i, j*i);
            if (j>n) printf("/ ");
        }
        printf("\n");
    }
    return 0;
}