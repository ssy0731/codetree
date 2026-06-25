#include <stdio.h>

int main() {
    // Please write your code here.
    int a = 5;
    int b = 6;
    int c = 7;
    int tmp = a;
    a = c;
    c = b;
    b = tmp;
    printf("%d\n%d\n%d",a,b,c);
    return 0;
}