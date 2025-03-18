// Your code here...
#include <stdio.h>

void rotateArray(int arr[], int N, int K) {
    K = K % N;
    
    void reverse(int arr[], int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    
    reverse(arr, 0, N - K - 1);
    reverse(arr, N - K, N - 1);
    reverse(arr, 0, N - 1);
}

int main() {
    int N, K;

    printf("");
    scanf("%d", &N);
    
    int arr[N];
    
    printf("");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("");
    scanf("%d", &K);

    rotateArray(arr, N, K);
    
    printf("");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}


