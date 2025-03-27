// Your code here...
#include <stdio.h>
int main() {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    k = k % n;
    int temp[n];
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}