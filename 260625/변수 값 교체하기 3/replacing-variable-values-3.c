#include <stdio.h>

int main() {
    // Please write your code here.
    int a = 3;
    int b = 5;
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d\n%d",a,b);
    return 0;
}