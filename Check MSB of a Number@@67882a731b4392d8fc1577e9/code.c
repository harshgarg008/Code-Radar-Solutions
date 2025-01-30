#include <stdio.h>
int main() {
    unsigned int a;
    scanf("%d",&a);
    if(a & 0x8000000)
    printf("Set");
    else
    printf("Not Set");
    return 0;
}