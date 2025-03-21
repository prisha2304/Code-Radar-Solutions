#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    // Loop to find unique pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                // Check if this pair has already been printed
                int alreadyPrinted = 0;
                for (int x = 0; x < i; x++) { 
                    for (int y = x + 1; y < i; y++) { 
                        if ((arr[x] == arr[i] && arr[y] == arr[j]) || (arr[x] == arr[j] && arr[y] == arr[i])) {
                            alreadyPrinted = 1;
                            break;
                        }
                    }
                    if (alreadyPrinted) break;
                }

                // Print only if it's a new unique pair
                if (!alreadyPrinted) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}

