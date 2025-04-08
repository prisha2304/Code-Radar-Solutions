#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n - 1]; // Last element is always valid
    printf("%d ", maxRight);

    // Traverse from second last to first
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            printf("%d ", arr[i]);
            maxRight = arr[i];
        }
    }

    return 0;
}
