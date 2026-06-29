#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,d;
    scanf("%d%d%d",&a,&b,&d);
    char *c="YES";
    for (a;a<=b;a++) {
        if (a%d==0) {
            c="NO";
            break;
        }
    }
    printf("%s",c);
    return 0;
}
