#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d%d", &a, &b);
    printf("%d",(a << b)& 0);
    return 0;
}