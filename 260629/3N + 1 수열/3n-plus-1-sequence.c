#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int c=0;
    while(1) {
        if (a==1) break;
        if (a%2==0) a/=2;
        else a=a*3+1;
        c++;
    }
    printf("%d",c);
    return 0;
}