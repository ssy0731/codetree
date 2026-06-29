#include <stdio.h>

int main() {
    // Please write your code here.
    while(1) {
        int a;
        scanf("%d",&a);
        if (a==25) {
            printf("Good");
            break;
        }
        else if (a<25) {
            printf("Higher\n");
        }
        else printf("Lower\n");
    }
    return 0;
}