#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    scanf("%d %d", &a, &b);

    // Check if sum is non-zero, otherwise check other operations
    if (a + b != 0) {
        printf("%d\n", a + b);
    }
    else if (a - b != 0) {
        printf("%d\n", a - b);
    }
    else if (a * b != 0) {
        printf("%d\n", a * b);
    }
    else if (b != 0 && a / b != 0) { // Avoid division by zero
        printf("%d\n", a / b);
    }
    else {
        printf("error\n");
    }

    return 0;
}
