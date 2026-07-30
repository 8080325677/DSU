#include <stdio.h>

#define MAX 100

int arr[MAX], n = 0;

// Function to create an array
void create() {
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to insert an element
void insert() {
    int pos, value, i;

    if (n == MAX) {
        printf("Array is full.\n");
        return;
    }

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Element inserted successfully.\n");
}

// Function to delete an element
void delete() {
    int pos, i;

    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
        return;
    }

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Element deleted successfully.\n");
}

// Function to display the array
void display() {
    int i;

    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int choice;

    do {
        printf("\n----- Array Operations -----\n");
        printf("1. Create\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insert();
                break;
            case 3:
                delete();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}
