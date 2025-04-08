#include<stdio.h>
void sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    // Sort the array to handle duplicates easily
    sort(arr, n);

    for(int i = 0; i < n; i++) {
        // Skip duplicates
        if(i > 0 && arr[i] == arr[i-1]) continue;

        for(int j = i + 1; j < n; j++) {
            // Skip duplicates
            if(j > i + 1 && arr[j] == arr[j-1]) continue;

            if(arr[i] + arr[j] == k) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}