// Your code here...
#include <stdio.h>

int main() {
    int n, i, num, evenCount = 0, oddCount = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("%d %d\n", evenCount, oddCount);
    return 0;
}