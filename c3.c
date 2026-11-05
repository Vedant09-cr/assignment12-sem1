#include <stdio.h>

struct Employee
{
    int id;
    union
    {
        int hourly_rate;
        float monthly_salary;
    };
};

int main()
{
    struct Employee e;
    e.id = 101;

    e.monthly_salary = 45000.0f;

    printf("ID = %d\n", e.id);
    printf("Salary = %.2f\n", e.monthly_salary);

    return 0;
}
