#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int lowestSetBit = a & -a;
    if (lowestSetBit != 0) {
        printf("0");
    } 
    else if(lowestSetBit = '2'){
    printf("1")}
    else {
        printf("1");
    }

    return 0;
}
