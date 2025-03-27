// Your code here...
#include <stdio.h>
#include <limits.h>
int main() {
    int n, i, num;
    scanf("%d", &n);
    int min = INT_MAX;
    int max = INT_MIN;
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}