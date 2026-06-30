#include <stdio.h>

int main() {
    // Please write your code here.
    int o=0,s=0;
    for (int i=0;i<10;i++) {
        int a;
        scanf("%d ",&a);
        if (i%2==0) o+=a;
        else s+=a;
    }
    if (s>o) printf("%d", s-o);
    else printf("%d",o-s);
    return 0;
}