#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // Read input for a, b, and c

    // Check if the sum of a and b equals c
    if (a + b == c)
        printf("%d\n", a + b);
    // Check if the difference of a and b equals c
    else if (a - b == c)
        printf("%d\n", a - b);
    // Check if the product of a and b equals c
    else if (a * b == c)
        printf("%d\n", a * b);
    // Check if the division of a by b equals c (and b is not 0)
    else if (b != 0 && a / b == c)
        printf("%d\n", a / b);
    else
        printf("error\n");  // If no condition matches, print error

    return 0;
}
