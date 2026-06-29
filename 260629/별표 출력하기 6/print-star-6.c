#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int n = a; n > 0; n--) {
        for (int j = 0; j < a-n;j++) {
            printf("  ");
        }
        for (int i = n * 2 - 1; i>0;i--){
            printf("* ");
        }
        printf("\n");
    }
    for (int m = 1; m < a; m++) {
        for (int x = a - m - 1; x>0; x--) {
            printf("  ");
        }
        for (int y = 0;y<m*2+1;y++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}