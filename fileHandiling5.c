/*. Implement a C program to read 20 integers through command line arguments and store 
them into a file Numbers.txt in the current working path. Then read the file Numbers.txt and
separate them into two different files odd.txt and even.txt such that odd numbers are copied 
to odd.txt and even numbers are copied to even.txt files respectively in the same current 
working path
Name:-Rahul Rana
Roll no. 52
Section- G2
Course-Btech
Branch- CSE*/
#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp, *ft, *fe;
    int num;
    
    // Open file for writing
    fp = fopen("number.txt", "w");
    if(fp == NULL){
        printf("file can't be created");
        exit(1);
    }
    
    // Read numbers from user and write to file
    while(1){
        printf("Enter number only: ");
        if(scanf("%d", &num) != 1) // Check if input is a valid integer
            break;
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);

    // Open files for reading and writing
    fp = fopen("number.txt", "r");
    ft = fopen("odd.txt", "w");
    fe = fopen("even.txt", "w");

    // Check if files are created successfully
    if(ft == NULL || fe == NULL){
        printf("File for odd or even numbers can't be created");
        exit(1);
    }

    // Read numbers from file and write to respective files
    while(1){
    if(fscanf(fp, "%d", &num) == EOF) break; // Read integer as text
    if(num % 2 == 0) {
        fprintf(fe, "%d\n", num); // Write even numbers as text
    } else {
        fprintf(ft, "%d\n", num); // Write odd numbers as text
    }
}
    fclose(fp);
    fclose(fe);
    fclose(ft);
}
