#include <stdio.h>

int main() {
    // Please write your code here.
    int s=0;
    int t=0;
    for (int i=0;i<10;i++) {
        int a;
        scanf("%d ",&a);
        if (i%2==1) s+=a;
        if ((i+1)%3==0) t+=a;
    }
    printf("%d %.1lf",s,(double)t/3);
    return 0;
}