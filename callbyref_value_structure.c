#include <stdio.h>
#include <string.h>

// Structure definition for Employee
struct Employee {
    int EMPID;
    char EMPNAME[100];
    float EMPSAL;
    char DEPARTMENT[100];
};

// Function to modify the Employee structure using call by value
void modifyEmployeeCallByValue(struct Employee emp) 
{
    emp.EMPID = 1001;
    strcpy(emp.EMPNAME,"John");
    emp.EMPSAL = 5000.0;
    strcpy(emp.DEPARTMENT,"IT");
}
// Function to modify the Employee structure using call by reference
void modifyEmployeeCallByReference(struct Employee *emp) 
{
    emp->EMPID = 1002;
    strcpy(emp->EMPNAME,"Jane");
    emp->EMPSAL = 6000.0;
    strcpy(emp->DEPARTMENT,"HR");
}
// Function to display the Employee structure
void displayEmployee(struct Employee emp) {
    printf("EMPID: %d\n", emp.EMPID);
    printf("EMPNAME: %s\n", emp.EMPNAME);
    printf("EMPSAL: %.2f\n", emp.EMPSAL);
    printf("DEPARTMENT: %s\n", emp.DEPARTMENT);
}
int main() {
    struct Employee emp1, emp2;
    // Pass the structure by value and modify its contents
    modifyEmployeeCallByValue(emp1);
    printf("Employee details after modification using call by value:\n");
    displayEmployee(emp1);
    printf("\n");
    // Pass the structure by reference and modify its contents
    modifyEmployeeCallByReference(&emp2);
    printf("Employee details after modification using call by reference:\n");
    displayEmployee(emp2);
    printf("\n");

    return 0;
}
