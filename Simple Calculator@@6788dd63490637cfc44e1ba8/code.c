#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d",&a,&b);
    if(a+b)
    printf("%d\n",a+b);
    else if(a-b)
    printf("%d\n",a-b);
    else if(c==a*b)
    printf("%d\n",a*b);
    else if(a / b)
    printf("%d\n",a/b);
    else 
    printf("error\n");
    return 0;
}