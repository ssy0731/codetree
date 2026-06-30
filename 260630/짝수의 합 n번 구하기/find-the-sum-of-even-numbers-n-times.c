#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int m=0; m<n; m++) {
        int a,b;
        scanf("%d%d",&a,&b);
        int s=0;
        for (int i=a; i<=b; i++) {
            if (i%2==0) s+=i;
        }
        printf("%d\n",s);
    }
    return 0;
}