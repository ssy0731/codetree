#include <stdio.h>

int main() {
    // Please write your code here.
    int a,c;
    char b,d;
    scanf("%d %c %d %c",&a,&b,&c,&d);
    if (a>=19 && b=='M') printf("1");
    else if (c>=19 && d=='M') printf("1");
    else printf("0");
    return 0;
}