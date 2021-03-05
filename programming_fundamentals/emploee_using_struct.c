#include <stdio.h>

struct Employee_details
{
    char name[30];
    int empId;
    float salary;
};

int main()
{

    struct Employee_details emplyee_1;
    printf("\nthis code belongs to sahil duhan 2k10/b9/12");
    printf("\nEnter details :\n");
    printf(" Enter your Name:");
    gets(emplyee_1.name);
    printf(" Enter your ID:");
    scanf("%d", &emplyee_1.empId);
    printf("Enter the Salary:");
    scanf("%f", &emplyee_1.salary);

    printf("\nEntered detail is:");
    printf("\nName: %s", emplyee_1.name);
    printf("\nId: %d", emplyee_1.empId);
    printf("\nSalary: %f\n", emplyee_1.salary);
    return 0;
}
