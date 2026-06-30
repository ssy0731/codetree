#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int cnt = 9;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (cnt<1) cnt=9;
            printf("%d",cnt);
            cnt --;
        }
        printf("\n");
    }
    return 0;
}