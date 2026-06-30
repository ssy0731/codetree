#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d ",&n);
    int arr[100];
    int c=0;
    for (int i=0; i<n; i++) {
        int a;
        scanf("%d ",&a);
    
        if (a%2==0) {
            arr[c] = a;
            
            c++;
        }
    }
    for (int j=0;j<c;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}