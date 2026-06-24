#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    if (n/3000 >= 1)
        printf("book");
    else if (n/1000 >= 1)
        printf("mask");
    else
        printf("no");
    return 0;
}