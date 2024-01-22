#include <stdio.h>

void main()
{
    struct Employee
    {
        int id;
        char name[50];
        float salary;
    } e1;
    scanf("%d\n %[^\n] %f", &e1.id, e1.name, &e1.salary);

    printf("ID: %d\nName: %s\nSalary: %.2f", e1.id, e1.name, e1.salary);
}