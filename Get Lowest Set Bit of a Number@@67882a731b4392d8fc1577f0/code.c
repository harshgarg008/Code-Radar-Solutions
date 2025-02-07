#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int lowestSetBit = a & -a;
    if (lowestSetBit != 0) {
        printf("%d", a, lowestSetBit);
    } else {
        printf("1");
    }

    return 0;
}
