#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], ch;
    int choice;

    do {
        printf("\n----- STRING FUNCTIONS MENU -----\n");
        printf("1. strlen()\n");
        printf("2. strcpy()\n");
        printf("3. strcat()\n");
        printf("4. strcmp()\n");
        printf("5. strrev()\n");
        printf("6. strupr()\n");
        printf("7. strlwr()\n");
        printf("8. strchr()\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from input buffer

        switch (choice) {
        case 1:
            printf("Enter a string: ");
            gets(str1);
            printf("Length = %lu\n", strlen(str1));
            break;

        case 2:
            printf("Enter source string: ");
            gets(str1);
            strcpy(str2, str1);
            printf("Copied string = %s\n", str2);
            break;

        case 3:
            printf("Enter first string: ");
            gets(str1);
            printf("Enter second string: ");
            gets(str2);
            strcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;

        case 4:
            printf("Enter first string: ");
            gets(str1);
            printf("Enter second string: ");
            gets(str2);

            if (strcmp(str1, str2) == 0)
                printf("Strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 5:
            printf("Enter a string: ");
            gets(str1);
            printf("Reversed string = %s\n", strrev(str1));
            break;

        case 6:
            printf("Enter a string: ");
            gets(str1);
            printf("Uppercase = %s\n", strupr(str1));
            break;

        case 7:
            printf("Enter a string: ");
            gets(str1);
            printf("Lowercase = %s\n", strlwr(str1));
            break;

        case 8:
            printf("Enter a string: ");
            gets(str1);
            printf("Enter a character to search: ");
            scanf("%c", &ch);

            if (strchr(str1, ch) != NULL)
                printf("Character '%c' found in the string.\n", ch);
            else
                printf("Character '%c' not found.\n", ch);
            break;

        case 9:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 9);

    return 0;
}
