#include <stdio.h>

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position (0-based): ");
    scanf("%d", &n);

    if (num & (1 << n))
        printf("Bit at position %d is SET (1).\n", n);
    else
        printf("Bit at position %d is CLEAR (0).\n", n);

    return 0;
}
