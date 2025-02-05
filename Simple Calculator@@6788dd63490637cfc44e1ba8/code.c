#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b)
    printf("a + b = %d\n",a+b);
    else if(a-b)
    printf("%d\n",c);
    else if(a*b)
    printf("%d\n",c);
    else if(a/b)
    printf("%d\n",c);
    else 
    printf("error\n");
    return 0;
}