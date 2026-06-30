#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    char a = 'A';
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
    return 0;
}