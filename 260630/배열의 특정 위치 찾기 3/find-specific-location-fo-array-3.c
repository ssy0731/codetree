#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100];
    int s = 0;
    for (int i=0;i<100;i++) {
        scanf("%d ",&arr[i]);
        if (arr[i] == 0) {
            s = arr[i-1] + arr[i-2] + arr[i-3];
            break;
        }
    }
    printf("%d",s);
    return 0;
}