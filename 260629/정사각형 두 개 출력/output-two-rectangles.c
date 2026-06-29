#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i=0;i<2;i++){
        for (int j=0;j<a;j++) {
            for (int k=0;k<a;k++) {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}