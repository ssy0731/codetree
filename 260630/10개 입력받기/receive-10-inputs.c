#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int s=0,c=0;
    for (int i=0;i<10;i++) {
        scanf("%d ",&arr[i]);
        if (arr[i]==0) {
            break;
        }
        else {
            c++;
            s+=arr[i];
        }
    }
    printf("%d %.1lf", s, (double)s/c);
    return 0;
}