#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int n;
    float total_marks = 0.0;

    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }
    float average_marks = total_marks / n;

    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);

    return 0;
}
