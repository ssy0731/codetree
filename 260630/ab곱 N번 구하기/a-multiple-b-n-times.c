#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int m=0; m<n; m++){
        int a,b;
        scanf("%d%d",&a,&b);
        int s=1;
        for (int i=a; i<=b; i++) {
            s*=i;   
        }
        printf("%d\n",s);
    }
    return 0;
}