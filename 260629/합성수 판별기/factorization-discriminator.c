#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    char c ='N';
    for (int i = 2; i<a; i++) {
        if (a%i==0) c='C';
    }
    printf("%c",c);
    return 0;
}