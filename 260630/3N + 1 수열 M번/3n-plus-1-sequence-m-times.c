#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    for (int m=0; m<n; m++){
        int a;
        scanf("%d",&a);
        int c=0;
        while(a!=1) {
            if (a%2==0) {
                a /= 2;
                c++;
            }
            else {
                a = a*3+1;
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}