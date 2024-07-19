#include <stdio.h>
#include <string.h>

// Function to rotate a string for n times circularly
void rotateString(char *str, int n) {
    int length = strlen(str);
    n %= length; // Ensure n is within the length of the string
    
    // Rotate the string for n times
    for (int i = 0; i < n; i++) {
        char temp = str[length - 1]; // Store the last character
        for (int j = length - 1; j > 0; j--) {
            str[j] = str[j - 1]; // Shift each character one position to the right
        }
        str[0] = temp; // Move the last character to the beginning
    }
}

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the number of rotations: ");
    scanf("%d", &n);

    rotateString(str, n);

    printf("String after %d rotations: %s\n", n, str);

    return 0;
}
