#include <stdio.h>

int main() {
    char operator;
    float num1, num2;
    scanf("%c", &operator);
    scanf("%f %f", &num1, &num2);
    if (operator == '+') {
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    }
    else if (operator == '-') {
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    }
    else if (operator == '*') {
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        } else {
            printf("Error! Division by zero.\n");
        }
    }
    else {
        printf("Invalid operator! Please use one of +, -, *, or /.\n");
    }

    return 0;
}

