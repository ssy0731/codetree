#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100];
    int n;
    int c=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int a=0;
        scanf("%d ",&a);
        if (a%2==0) {
            arr[c] = a;
            c++;
        }
    }
    for (int j=c-1;j>=0;j--) {
        printf("%d ",arr[j]);
    }
    return 0;
}