#include <stdio.h>

struct Student {
    int roll;
    char name[40];
    float m[3];
    char grade;
};

void displayStudent(struct Student s)
{
    printf("Roll = %d, Name = %s, Grade = %c\n", s.roll, s.name, s.grade);
}

float totalMarks(struct Student s)
{
    return s.m[0] + s.m[1] + s.m[2];
}

void updateGrade(struct Student *s, char newGrade)
{
    s->grade = newGrade;
}

int main()
{
    struct Student s1 = {101, "Aarav", {82, 76, 91}, 'B'};
    displayStudent(s1);
    printf("Total = %.2f\n", totalMarks(s1));
    updateGrade(&s1, 'A');
    printf("After pass by reference: ");
    displayStudent(s1);
    return 0;
}
