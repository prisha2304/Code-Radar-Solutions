#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakFound = 0;  // Flag to check if peak exists

    // Find the first peak element
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) &&  // Check left neighbor (if exists)
            (i == n - 1 || arr[i] > arr[i + 1])) {  // Check right neighbor (if exists)
            printf("%d\n", arr[i]); // Print the first peak
            peakFound = 1;
            break; // Exit after finding the first peak
        }
    }

    // If no peak is found, print -1
    if (!peakFound) {
        printf("-1\n");
    }

    return 0;
}
