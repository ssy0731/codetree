#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int b = 0; b<a; b++) {
        for (int i = a-b-1; i>0; i--) {
            printf("  ");
        }
        for (int j = 0; j<2*b+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}