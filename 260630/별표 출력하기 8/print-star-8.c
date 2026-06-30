#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n;i++) {
        if (i%2==0) {
            printf("* ");
        }
        else {
            for (int j = 0;j<i+1;j++)
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}