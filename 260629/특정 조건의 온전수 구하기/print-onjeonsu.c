#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        if (i%2==0) continue;
        else if (i%10==5) continue;
        else if (i%3==0 && i%9!=0) continue;
        else printf("%d ",i);
    }
    return 0;
}