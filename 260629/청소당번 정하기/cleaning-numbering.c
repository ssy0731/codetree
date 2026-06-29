#include <stdio.h>

int main() {
    // Please write your code here.
    int n,a,b,c;
    a=b=c=0;
    scanf("%d",&n);
    for (int i=1; i <= n; i++) {
        if (i%12 == 0) c++;
        else if (i%3 == 0) b++;
        else if (i%2 == 0) a++;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}