#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the first peak element
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) &&  // Check if it's greater than the left neighbor
            (i == n - 1 || arr[i] > arr[i + 1])) {  // Check if it's greater than the right neighbor
            printf("%d\n", arr[i]); // Print the first peak and break
            break;
        }
    }

    return 0;
}
