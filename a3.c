#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[40];
    float salary;
    struct Date joining;
};

int main()
{
    struct Employee e;

    printf("Enter employee ID, name and salary: ");
    scanf("%d %39s %f", &e.id, e.name, &e.salary);

    printf("Enter date of joining (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day, &e.joining.month, &e.joining.year);

    printf("\nID = %d\nName = %s\nSalary = %.2f\n", e.id, e.name, e.salary);
    printf("Joining date = %02d-%02d-%04d\n", e.joining.day, e.joining.month, e.joining.year);
    return 0;
}
