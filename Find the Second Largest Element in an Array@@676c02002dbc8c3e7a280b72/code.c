// Your code here...
#include <stdio.h>
int main() {
    int n, i, largest, secondLargest, temp;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1\n");
        return 0;
    }
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    secondLargest = -1;
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    if (secondLargest == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", secondLargest);
    }
    return 0;
}