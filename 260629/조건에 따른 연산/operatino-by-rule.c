#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int c = 0;
    while (a<1000) {
        c++;
        if (a%2==0) a=a*3+1;
        else a=a*2+2;
    }
    printf("%d",c);
    return 0;
}