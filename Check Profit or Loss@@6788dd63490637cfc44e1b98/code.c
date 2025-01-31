#include <stdio.h>
int main() {
    float a;
    float b;
    scanf("%f%f",&a,&b);
    if(a<b)
    printf("Profit");
    else if(a>b)
    printf("Loss");
    else
    printf("No Profit No Loss");
    return 0;
}