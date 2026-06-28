#include <stdio.h>

int main() {
    // Please write your code here.
    int a, lv;
    scanf("%d",&a);
    lv = a == 100? 0:1;
    if (lv == 0)
        printf("pass");
    else printf("failure");
    return 0;
}