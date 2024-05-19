#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
int main() {
    char name[50];
    int rollNumber;
    struct Date dob, doa; 
    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Roll Number: ");
    scanf("%d", &rollNumber);
    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &dob.day, &dob.month, &dob.year);
    printf("Enter date of admission (DD MM YYYY): ");
    scanf("%d %d %d", &doa.day, &doa.month, &doa.year);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollNumber);
    printf("Date of Birth: %02d-%02d-%04d\n", dob.day, dob.month, dob.year);
    printf("Date of Admission: %02d-%02d-%04d\n", doa.day, doa.month, doa.year);
    return 0;
}
