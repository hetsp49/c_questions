#include <stdio.h>

// Structure for employee record
struct Employee {
    char name[100];
    int employeeId;
    float salary;
};

int main() {
    struct Employee employee;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%99s", employee.name);

    printf("Enter employee ID: ");
    scanf("%d", &employee.employeeId);

    printf("Enter employee salary: ");
    scanf("%f", &employee.salary);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.employeeId);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}
