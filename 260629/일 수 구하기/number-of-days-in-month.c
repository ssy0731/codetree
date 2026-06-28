#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if (a==2) printf("28");
    else if ((a<=7&&a%2==1)||(a>=8&&a%2==0)) printf("31");
    else printf("30");
    return 0;
}