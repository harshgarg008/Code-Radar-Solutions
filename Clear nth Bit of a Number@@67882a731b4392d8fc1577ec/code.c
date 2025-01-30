#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d%d", &a, &b);
    a = a & ~(1 << b);
    printf("%d",a);
    return 0;
}