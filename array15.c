//Here's a C program that reads an array of 20 numbers from the user, filters out numbers with two or more digits,
// and prints only those numbers whose sum of digits is a prime number:

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[20];

    // Read 20 numbers from the user
    printf("Enter 20 numbers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    // Print numbers whose sum of digits is prime
    printf("Numbers whose sum of digits is prime:\n");
    for (int i = 0; i < 20; i++) {
        int num = arr[i];

        // Check if the number has two or more digits
        if (num >= 10) {
            // Calculate the sum of digits
            int sumOfDigits = 0;
            while (num > 0) {
                sumOfDigits += num % 10;
                num /= 10;
            }

            // Check if the sum of digits is prime
            if (isPrime(sumOfDigits)) {
                printf("%d\n", arr[i]);
            }
        }
    }

    return 0;
}
