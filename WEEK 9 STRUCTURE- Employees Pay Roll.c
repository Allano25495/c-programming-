#include <stdio.h>

struct Employee
{
    char ID[10];
    char Name[50];
    char Department[30];
    float BasicSalary;
    float Allowance;
};

float calculateGrossSalary(struct Employee emp)
{
    return emp.BasicSalary + emp.Allowance;
}

int main()
{
    struct Employee employee[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%9s", employee[i].ID);

        printf("Employee Name: ");
        scanf("%49s", employee[i].Name);

        printf("Department: ");
        scanf("%29s", employee[i].Department);

        printf("Basic Salary: ");
        scanf("%f", &employee[i].BasicSalary);

        printf("Allowance: ");
        scanf("%f", &employee[i].Allowance);
    }

  printf("\n====================================\n");
printf("EMPLOYEE PAYROLL REPORT\n");
printf("====================================\n");

for(i = 0; i < 3; i++)
{
    printf("Employee ID      : %s\n", employee[i].ID);
    printf("Employee Name    : %s\n", employee[i].Name);
    printf("Department       : %s\n", employee[i].Department);
    printf("Gross Salary     : %.2f\n", calculateGrossSalary(employee[i]));
    printf("------------------------------------\n");
}
return 0;
}