#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int j = a;
    for (int i=0;i<=a;i++) {
        for (int k=0;k<j;k++) {
            printf("* ");
        }
        j--;
        printf("\n");

    }
    return 0;
}