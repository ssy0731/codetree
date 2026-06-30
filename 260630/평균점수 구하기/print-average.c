#include <stdio.h>

int main() {
    // Please write your code here.
    double arr[8];
    double s=0;
    for (int i=0;i<8;i++){
        scanf("%lf",&arr[i]);
        s+=arr[i];
    }
    printf("%.1lf\n",(double)s/8);
    return 0;
}