#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int lowestSetBit = a & -a;
    if (lowestSetBit != 0) {
        printf("%d", a, lowestSetBit);
    } else {
        printf("The number %d has no set bits (it's 0).\n", a);
    }

    return 0;
}
