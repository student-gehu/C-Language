//que-->find the largest and smallest element in an array and swap the position of the two element (interchange the positions.)
// show the new array as output

#include <stdio.h>

void findAndSwap(int a[], int n);

int main() {
    int n, a[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call the function to find and swap
    findAndSwap(a, n);

    printf("Array after swapping: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

void findAndSwap(int a[], int n) {
    int minIndex = 0, maxIndex = 0;

    // Find the index of the smallest and largest elements
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    // Swap the positions of the smallest and largest elements
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;
}
