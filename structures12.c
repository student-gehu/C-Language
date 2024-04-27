#include<stdio.h>

typedef struct customer {
    char name[100];
    int acno, bal;
} cust;

void displaybalance200(cust e1[], int n);
void addmoney(cust e1[], int n);

int main() {
    cust e1[10];
    int n, i;
    char ch;
    
    printf("How many customers: ");
    scanf("%d", &n);
    // Clear the input buffer
    while ((ch = getchar()) != '\n' && ch != EOF);

    for(i = 0; i < n; i++) {
        printf("\nEnter name: ");
        fgets(e1[i].name, 100, stdin);
        printf("Enter account number: ");
        scanf("%d", &e1[i].acno);
        printf("Enter balance: ");
        scanf("%d", &e1[i].bal);
        // Clear the input buffer
        while ((ch = getchar()) != '\n' && ch != EOF);
    }

    displaybalance200(e1, n);
    addmoney(e1, n);

    return 0;
}

void displaybalance200(cust e1[], int n) {
    int i;
    printf("\nName of customers with balance < 200\n");
    for(i = 0; i < n; i++) {
        if(e1[i].bal < 200) {
            printf("Name: %s, Balance: %d\n", e1[i].name, e1[i].bal);
        }
    }
}

void addmoney(cust e1[], int n) {
    int i;
    printf("\n\nAddition of balance\n");
    for(i = 0; i < n; i++) {
        if(e1[i].bal > 1000) {
            e1[i].bal += 100;
            printf("Name: %sBalance: %d\n", e1[i].name, e1[i].bal);
        }
    }
}
