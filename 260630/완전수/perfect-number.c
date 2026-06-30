#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0;
    for (int i=a; i<=b; i++) {
        int s=0;
        for (int j=1; j<i; j++) {
            if (i%j==0) {
                s += j;
            }
        }
        if (s==i) c++;
    }
    printf("%d\n",c);

    return 0;
}