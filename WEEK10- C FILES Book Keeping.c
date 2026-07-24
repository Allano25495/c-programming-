#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode
    file = fopen("borrowed_books.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Get book title from the user
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    // Remove newline character if present
    title[strcspn(title, "\n")] = '\0';

    // Write the title to the file
    fprintf(file, "%s\n", title);

    // Close the file
    fclose(file);

    // Confirmation message
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}