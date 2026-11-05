#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks[3];
};

int main()
{
    struct Student s;
    float total, average;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%19s", s.name);

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &s.marks[0], &s.marks[1], &s.marks[2]);

    total = s.marks[0] + s.marks[1] + s.marks[2];
    average = total / 3.0f;

    printf("\nRoll = %d\nName = %s\n", s.roll, s.name);
    printf("Total = %.2f\nAverage = %.2f\n", total, average);
    if (average >= 90)
        printf("Grade = A\n");
    else if (average >= 75)
        printf("Grade = B\n");
    else if (average >= 60)
        printf("Grade = C\n");
    else if (average >= 40)
        printf("Grade = D\n");
    else
        printf("Grade = F\n");

    return 0;
}
