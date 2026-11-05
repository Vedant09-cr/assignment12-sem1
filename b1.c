#include <stdio.h>

typedef struct
{
    int roll;
    char name[40];
    float cgpa;
} Student;

int main()
{
    Student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter roll, name and CGPA: ");
        scanf("%d %39s %f", &s[i].roll, s[i].name, &s[i].cgpa);
    }
    printf("\nStudent Records\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].cgpa);
    }
    return 0;
}
