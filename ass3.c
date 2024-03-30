#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    
    // Read string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';
    
    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}
