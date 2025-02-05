#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b == c)
    printf("%d\n",c);
    else if(a-b == c)
    printf("%d\n",c);
    else if(a*b == c)
    printf("%d\n",c);
    else if(a/b == c)
    printf("%d\n",c);
    else 
    printf("error\n");
    return 0;
}