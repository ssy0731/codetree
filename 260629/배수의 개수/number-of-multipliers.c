#include <stdio.h>

int main() {
    // Please write your code here.
    int x = 0,y = 0;
    for (int i = 1; i<=10; i++) {
        int a;
        scanf("%d",&a);
        if (a%3==0) x++;
        if (a%5==0) y++;
    }
    printf("%d %d",x,y);
    return 0;
}