#include <stdio.h>

int main() {
    // Please write your code here.
    int s=0,c=0;
    int a;
    for (int i=1;i<=10;i++){
        scanf("%d",&a);
        if (a<=200 && a>=0) {
            s+=a;
            c++;
        }
    }
    printf("%d %.1lf",s,(double)s/c);
    return 0;

}