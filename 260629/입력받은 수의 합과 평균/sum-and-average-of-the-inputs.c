#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int s=0;
    for (int i = 1; i<=n;i++){
        int a;
        scanf("%d",&a);
        s+=a;
    }
    printf("%d %.1lf",s,(double)s/n);
    return 0;
}