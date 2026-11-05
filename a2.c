#include <stdio.h>

struct Student {
    int roll;
    char name[40];
    float m[3];
};

float average(struct Student s)
{
    return (s.m[0] + s.m[1] + s.m[2]) / 3.0f;
}

int main()
{
    struct Student s[100];
    int n, i;
    float best;

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter roll, name and three marks: ");
        scanf("%d %39s %f %f %f", &s[i].roll, s[i].name, &s[i].m[0], &s[i].m[1], &s[i].m[2]);
    }

    best = average(s[0]);

    for (i = 1; i < n; i++)
    {
        if (average(s[i]) > best)
            best = average(s[i]);
    }

    printf("\nHighest-average student(s):\n");

    for (i = 0; i < n; i++)
    {
        if (average(s[i]) == best)
        {
            printf("%d %s %.2f\n", s[i].roll, s[i].name, average(s[i]));
        }
    }
    return 0;
}
