#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

char getGrade(float marks) {
    if (marks >= 85) {
        return 'A';
    } else if (marks >= 70) {
        return 'B';
    } else {
        return 'C';
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    struct Student students[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    
    for (int i = 0; i < N; i++) {
        char grade = getGrade(students[i].marks);
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll_number, students[i].name, grade);
    }

    return 0;
}
