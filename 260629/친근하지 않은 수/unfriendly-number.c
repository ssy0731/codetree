#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int c=a;
    for (int i=1;i<=a;i++) {
        if (i%2==0 || i%3==0 || i%5==0)
            c-=1;
    }
    printf("%d",c);
    return 0;
}