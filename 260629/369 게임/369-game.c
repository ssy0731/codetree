#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) {
        if (i%3==0) {
            printf("0 ");
        }
        else if (i > 10 && (i%10)%3==0 && i%10!=0) {
            printf("0 ");
        }
        else if (i > 10 && (i/10)%3==0) {
            printf("0 ");
        }
        else {
            printf("%d ",i);
        }
    }
    return 0;
}