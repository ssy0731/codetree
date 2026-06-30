#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int c=0, s=0;
    for (int i=0;i<10;i++) {
        scanf("%d ", &arr[i]);
        if (arr[i]==0) break;
        else if (arr[i]%2==0) {
            c++;
            s+=arr[i];
        }
    }
    printf("%d %d",c,s);
    return 0;
}