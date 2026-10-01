#include <stdio.h>
#include <string.h>

int main() {
    char str[20][50], key[50];
    int n, i, found = 0;

    // Input number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Clear newline character

    // Input strings
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0'; // Remove newline
    }

    // Input string to search
    printf("Enter the string to search: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    // Linear Search
    for (i = 0; i < n; i++) {
        if (strcmp(str[i], key) == 0) {
            found = 1;
            printf("String found at position %d.\n", i + 1);
            break;
        }
    }

    if (!found) {
        printf("String not found.\n");
    }

    return 0;
}
