#include <stdio.h>

int main() {
    // Please write your code here.
    for (int i=0; i<10; i++) {
        char a;
        scanf("%c ",&a);
        if (i==1||i==4||i==7) printf("%c ",a);
    }
    return 0;
}