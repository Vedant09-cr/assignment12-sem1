#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int roll;
    char name[40];
    float cgpa;
    Date dob;
} Student;

void display(Student *s)
{
    printf("%d %s CGPA %.2f DOB %02d-%02d-%04d\n", s->roll, s->name, s->cgpa, s->dob.day, s->dob.month, s->dob.year);
}

void checkScholarship(Student *s)
{
    if (s->cgpa >= 8.5f)
        printf("Eligible for merit scholarship\n");
    else
        printf("Not eligible for merit scholarship\n");
}

int main()
{
    Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter roll, name, CGPA and DOB (DD MM YYYY): ");
        scanf("%d %39s %f %d %d %d", &s[i].roll, s[i].name, &s[i].cgpa, &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
    }

    for (i = 0; i < n; i++)
    {
        display(&s[i]);
        checkScholarship(&s[i]);
    }

    return 0;
}
