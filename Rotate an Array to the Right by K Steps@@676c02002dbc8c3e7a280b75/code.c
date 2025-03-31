#include<stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n;  // Handle cases where k >= n

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining n-k elements
    reverse(arr, k, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    rotateRight(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

