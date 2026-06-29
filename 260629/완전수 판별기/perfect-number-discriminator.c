#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    int s = 0;
    scanf("%d",&a);
    for (int i = 1;i<a;i++) {
        if (a%i==0) s+=i;
    }
    if (s==a) printf("P");
    else printf("N");
    return 0;
}