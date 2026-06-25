#include <stdio.h>

int main() {
    // Please write your code here.
    int a=1,b=2,c=3;
    int tmp = a+b+c;
    a=b=c=tmp;
    printf("%d %d %d",a,b,c);
    return 0;
}