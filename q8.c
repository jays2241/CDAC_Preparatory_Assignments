#include <stdio.h>

int main() {
    struct Student {
        char studentName[50];
        char rollNo[20];
        int totalMarks;
    };

    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.studentName);

    printf("Enter roll number: ");
    scanf("%s", s.rollNo);

    printf("Enter total marks: ");
    scanf("%d", &s.totalMarks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.studentName);
    printf("Roll Number: %s\n", s.rollNo);
    printf("Total Marks: %d\n", s.totalMarks);

    return 0;
}
