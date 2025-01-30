#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a == 0)
    printf("-1\n");
    else
    printf("%d\n"a & -a);
    return 0;
}