#include <stdio.h>

int main() {
    // Please write your code here.
    int h,w;
    scanf("%d%d",&h,&w);
    double b = 10000*w/h/h;
    printf("%.lf\n",b);
    if (b>=25)
        printf("Obesity");
    return 0;
}