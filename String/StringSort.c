#include <stdio.h>
#include <string.h>

void StringSort(char A[][100], int n) {
    int i, j;
    char temp[100];
    for (i = 0; i < n-1 ; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(A[i], A[j]) > 0) {
                // Swap strings if they are in the wrong order
                strcpy(temp, A[i]);
                strcpy(A[i], A[j]);
                strcpy(A[j], temp);
            }
        }
    }
}

int main() {
    int i, n;
    char A[100][100]; // Array to hold up to 100 strings of length 99

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", A[i]);
    }

    StringSort(A, n);

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", A[i]);
    }

    return 0;
}

