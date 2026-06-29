#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d%d",&a,&b);
    int i =1;
    while (i<=a) {
        if (i%b==0) printf("1\n");
        else printf("0\n");
        i++;
    }
    return 0;
}