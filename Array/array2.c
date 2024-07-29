# include <stdio.h>
void printNumbers(int *arr, int n);
void _printNumbers(int arr[], int n);
int main() {
int arr[] = {1, 2, 3, 4, 5, 6};         //through using array we store more then one element in a variable int 
printNumbers(arr, 6);
printNumbers(arr, 6);
return 0;
}
void printNumbers(int *arr, int n) {
for(int i=0; i<n; i++) {
printf("%d : %d\n", i, arr[i]);
}
}
void _printNumbers(int arr[], int n) {
for(int i=0; i<n; i++) {
printf("%d : %d\n", i, arr[i]);
}
}