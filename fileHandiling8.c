/* Write a C program to create a file ThreeParas.txt and write any three paragraphs of text 
to it. Display the content of the file and the count of frequency of consonants and vowels present 
in it to the console. 
Name:-Rahul Rana
Roll no. 52
Section- G2
Course-Btech
Branch- CSE*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Create and write to the file
    fp = fopen("ThreeParas.txt", "w");
    if (fp == NULL) {
        printf("File cannot be created!\n");
    } else {
        printf("Enter data in file (Ctrl+D to end input on UNIX, Ctrl+Z on Windows):\n");

        while (1) {
            ch = getchar();
            if (ch == EOF) break;
            fputc(ch, fp);
        }
        fclose(fp);

        // Open the file for reading
        fp = fopen("ThreeParas.txt", "r");
        if (fp == NULL) {
            printf("File cannot be opened!\n");
        } else {
            printf("\nContent of the file:\n");
            while (1) {
                ch = fgetc(fp);
                if (ch == EOF) break;
                putchar(ch);

                // Count vowels and consonants
                if (isalpha(ch)) {
                    ch = tolower(ch);
                    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                        vowels++;
                    } else {
                        consonants++;
                    }
                }
            }
            fclose(fp);

            // Display the counts
            printf("\nTotal vowels: %d\n", vowels);
            printf("Total consonants: %d\n", consonants);
        }
    }
}
