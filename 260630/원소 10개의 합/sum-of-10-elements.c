#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    int s=0;
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    printf("%d",s);
    return 0;
}