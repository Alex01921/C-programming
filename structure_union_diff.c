#include <stdio.h>
#include <string.h>
// Structure definition for Nidhi using structure
struct Student_Structure 
{
    int rollNumber;
    char name[100];
    float cgpa;
};
// Union definition for Nidhi using union
union Student_Union 
{
    int rollNumber;
    char name[100];
    float cgpa;
};
int main() 
{
    // Using Structure
    struct Student_Structure studentStructure;
    printf("Enter Nidhi's roll number: ");
    scanf("%d", &studentStructure.rollNumber);
    printf("Enter Nidhi's name: ");
    scanf(" %[^\n]s", studentStructure.name);
    printf("Enter Nidhi's CGPA: ");
    scanf("%f", &studentStructure.cgpa);

    printf("\nStudent details using Structure:\n");
    printf("Roll Number: %d\n", studentStructure.rollNumber);
    printf("Name: %s\n", studentStructure.name);
    printf("CGPA: %.2f\n", studentStructure.cgpa);

    // Using Union
    union Student_Union studentUnion;
    printf("\nEnter Nidhi's roll number: ");
    scanf("%d", &studentUnion.rollNumber);
    printf("Enter Nidhi's name: ");
    scanf(" %[^\n]s", studentUnion.name);
    printf("Enter Nidhi's CGPA: ");
    scanf("%f", &studentUnion.cgpa);

    printf("\nStudent details using Union:\n");
    printf("Roll Number: %d\n", studentUnion.rollNumber);
    printf("Name: %s\n", studentUnion.name);
    printf("CGPA: %.2f\n", studentUnion.cgpa);

    return 0;
}

