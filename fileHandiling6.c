 /* Develop a C program to create a file and copy its contents to another file such that there is 
 no space between any of the words in the copied file. Display the content of the newly copied 
 file to the output screen.
Name:-Rahul Rana
Roll no. 52
Section- G2
Course-Btech
Branch- CSE*/
#include <stdio.h>
#include <stdlib.h>

void removeSpacesAndCopy(const char *source, const char *destination) {
    FILE *src = fopen(source, "r");
    FILE *dest = fopen(destination, "w");

    if (src == NULL || dest == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        if (ch != ' ') {
            fputc(ch, dest);
        }
    }

    fclose(src);
    fclose(dest);
}

void displayFile(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main() {
    const char *sourceFile = "source.txt";
    const char *destinationFile = "destination.txt";

    // Create and write to the source file
    FILE *src = fopen(sourceFile, "w");
    if (src == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter text to write to the file (Ctrl+D to end input):\n");
    char ch;
    while ((ch = getchar()) != EOF) {
        fputc(ch, src);
    }

    fclose(src);

    // Remove spaces and copy content to destination file
    removeSpacesAndCopy(sourceFile, destinationFile);

    // Display the content of the destination file
    printf("\nContent of the destination file without spaces:\n");
    displayFile(destinationFile);

    return 0;
}
