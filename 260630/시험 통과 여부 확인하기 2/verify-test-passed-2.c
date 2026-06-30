#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int c=0;
    scanf("%d",&n);
    for (int i=0; i<n;i++ ) {
        int arr[4];
        int s=0;
        for (int j=0; j<4; j++) {
            scanf("%d ",&arr[j]);
            s += arr[j];
        }
        if (s/4>=60) {
            printf("pass\n");
            c++;
        }
        else printf("fail\n");
    }
    printf("%d",c);

    return 0;
}