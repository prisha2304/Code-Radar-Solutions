#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakCount = 0;
    int secondPeak = -1;

    // Find peak elements
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            peakCount++;
            if (peakCount == 2) { // Store second peak
                secondPeak = arr[i];
                break;
            }
        }
    }

    printf("%d\n", secondPeak);
    return 0;
}
