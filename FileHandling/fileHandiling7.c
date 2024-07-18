/*Develop a program in C to read a structure in the main program of an Employee that 
contains Name, EmpCode and Salary as the members. Write a function display the details of 
the employee in the following format.
Name:-Rahul Rana
Roll no. 52
Section- G2
Course-Btech
Branch- CSE*/
#include <stdio.h>
#include <stdlib.h>

// Define the structure for Employee
typedef struct {
    char name[100];
    int empCode;
    float salary;
} Employee;

// Function to display the details of the employee
void display(Employee emp) {
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Employee Code: %d\n", emp.empCode);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    Employee emp;

    // Read the employee details from the user
    printf("Enter the Name of the Employee: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter the Employee Code: ");
    scanf("%d", &emp.empCode);

    printf("Enter the Salary: ");
    scanf("%f", &emp.salary);

    // Display the employee details
    display(emp);

    return 0;
}

