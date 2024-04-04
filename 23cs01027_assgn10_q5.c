#include <stdio.h>
#include <string.h>
enum PayType
{
    HOURLY = 1,
    SALARY = 2
};
union EmpDetails
{
    float hourly_wage;
    double fixed;
    enum PayType pay2;
};
struct Employee
{
    int employee_id;
    char name[100];
    union EmpDetails emp1;
    enum PayType pay1;
};
int main()
{
    struct Employee employee1;
    employee1.employee_id = 100;
    strcpy(employee1.name, "K.Siddarth\0");
    printf("Hourly Wage\nFixed Salary\n");
    printf("Enter choice: ");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case HOURLY:
        employee1.pay1 = HOURLY;
        employee1.emp1.pay2=HOURLY;
        printf("Enter hourly wage: ");
        scanf("%f", &employee1.emp1.hourly_wage);
        break;
    case SALARY:
        employee1.pay1 = SALARY;
        employee1.emp1.pay2=SALARY;
        printf("Enter fixed Salary: ");
        scanf("%lf", &employee1.emp1.fixed);
        break;
    default:
        printf("Wrong choice");
        return 0;
    }
    if (employee1.pay1 == HOURLY)
    {
        printf("Employee ID: %d\n", employee1.employee_id);
        printf("Employee name: %s\n", employee1.name);
        printf("Employee hourly wage: %f", employee1.emp1.hourly_wage);
    }
    if (employee1.pay1 == SALARY)
    {
        printf("Employee ID: %d\n", employee1.employee_id);
        printf("Employee name: %s\n", employee1.name);
        printf("Employee fixed salary: %lf", employee1.emp1.fixed);
    }
    return 0;
}