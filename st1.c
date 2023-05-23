#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Structure for bank customer
struct Customer {
    char name[100];
    int accountNumber;
    char dob[11];
    char gender;
};

// Function to check if a string contains only alphabetic characters
int isAlphabetic(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (!isalpha(str[i])) {
            return 0;  // Not alphabetic character found
        }
    }
    return 1;  // Only alphabetic characters found
}

// Function to check if a string contains only numeric characters
int isNumeric(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (!isdigit(str[i])) {
            return 0;  // Not numeric character found
        }
    }
    return 1;  // Only numeric characters found
}

// Function to create a bank account
void createAccount(struct Customer* customer) {
    printf("Enter customer name: ");
    scanf("%99s", customer->name);

    // Check if name contains only alphabetic characters
    if (!isAlphabetic(customer->name)) {
        printf("Invalid name! Only alphabetic characters are allowed.\n");
        exit(1);
    }

    printf("Enter account number: ");
    scanf("%d", &(customer->accountNumber));

    char dobInput[11];
    printf("Enter date of birth (YYYY-MM-DD): ");
    scanf("%s", dobInput);

    // Check if date of birth has the correct format
    if (strlen(dobInput) != 10 || dobInput[4] != '-' || dobInput[7] != '-') {
        printf("Invalid date of birth format! Use YYYY-MM-DD format.\n");
        exit(1);
    }

    strcpy(customer->dob, dobInput);

    printf("Enter gender (M/F): ");
    scanf(" %c", &(customer->gender));

    // Check if gender is either 'M' or 'F'
    if (toupper(customer->gender) != 'M' && toupper(customer->gender) != 'F') {
        printf("Invalid gender! Only 'M' or 'F' is allowed.\n");
        exit(1);
    }
}

// Function to close a bank account
void closeAccount(struct Customer* customer) {
    printf("Enter the account number to close: ");
    int accountNumber;
    scanf("%d", &accountNumber);

    if (accountNumber == customer->accountNumber) {
        printf("Account closed successfully!\n");
        // Reset the customer details
        strcpy(customer->name, "");
        customer->accountNumber = 0;
        strcpy(customer->dob, "");
        customer->gender = '\0';
    } else {
        printf("Account number does not match. Account closure failed.\n");
    }
}

int main() {
    struct Customer customer;

    createAccount(&customer);

    printf("\nAccount Details:\n");
    printf("Name: %s\n", customer.name);
    printf("Account Number: %d\n", customer.accountNumber);
    printf("Date of Birth: %s\n", customer.dob);
    printf("Gender: %c\n", customer.gender);

    closeAccount(&customer);

    return 0;
}


