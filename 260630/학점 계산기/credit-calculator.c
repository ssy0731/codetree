#include <stdio.h>

int main() {
    // Please write your code here.
    double arr[5];
    int n;
    scanf("%d",&n);
    double s=0;
    int c=0;
    for (int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        c++;
        s+=arr[i];
    }
    printf("%.1lf\n",(double)s/c);
    if (s/c>=4.0) printf("Perfect");
    else if (s/c>=3.0) printf("Good");
    else printf("Poor");
    return 0;
}