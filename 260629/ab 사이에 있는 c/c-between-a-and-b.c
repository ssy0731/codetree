#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int r=0;
    for (a;a<=b;a++) {
        if (a%c==0) r=1;
    }
    if (r==1) printf("YES");
    else printf("NO");
    return 0;
}