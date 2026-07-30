#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxAnd = 0, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find maximum AND value among all pairs
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            value = arr[i] & arr[j];

            if (value > maxAnd) {
                maxAnd = value;
            }
        }
    }

    printf("Maximum AND value of any pair = %d\n", maxAnd);

    return 0;
}
