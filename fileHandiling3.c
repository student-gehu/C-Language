//count new line or space using read mode in file program
#include<stdio.h>

int main() {
    char ch;
    int countnewline = 0, countspace = 0;

    FILE* fp;
    fp = fopen("gehu.txt", "r");
    if (fp == NULL) {
        printf("The file is not present");
        return 1;
    } else {
        printf("Enter something!!");
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            countnewline++;
        } else if (ch == ' ') {
            countspace++;
        }
    }

    fclose(fp);
    printf("Newline=%d\n", countnewline);
    printf("Space=%d\n", countspace);

    return 0;
}
