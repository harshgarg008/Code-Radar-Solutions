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
