#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=1; i<=9; i++) {
        for (int j=m; j>=n; j-=2) {
            printf("%d * %d = %d ",j,i,j*i);
            if (j>n) printf("/ ");
        }
        printf("\n");
    }
    return 0;
}