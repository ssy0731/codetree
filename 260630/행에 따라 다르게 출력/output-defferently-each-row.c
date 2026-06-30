#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int c = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i%2==0) c++;
            else c+=2;
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}