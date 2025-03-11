#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int n;
    struct Student students[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    struct Student min_student = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks < min_student.marks) {
            min_student = students[i];
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", 
            min_student.roll_number, min_student.name, min_student.marks);

    return 0;
}
