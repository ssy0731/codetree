#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i=0;i<a;i++) {
        for (int j=0;j<a-i;j++){
            for (int k=0;k<a-i;k++) {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}