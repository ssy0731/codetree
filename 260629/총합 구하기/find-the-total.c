#include <stdio.h>

int main() {
    // Please write your code here.
    int s=0;
    int a,b;
    scanf("%d%d",&a,&b);
    for (a;a<=b;a++) {
        if (a%6==0 && a%8!=0) s+=a;
    }
    printf("%d",s);
    return 0;
}