#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

void sortStudents(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    sortStudents(students, n);

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }

    return 0;
}
