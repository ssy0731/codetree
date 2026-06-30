#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int cnt = 2;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (cnt>8) cnt=2;
            printf("%d ", cnt);
            cnt += 2;
        }
        printf("\n");
    }
    return 0;
    
}