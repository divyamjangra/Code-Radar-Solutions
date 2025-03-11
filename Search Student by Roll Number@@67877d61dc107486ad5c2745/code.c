#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int n, roll_number_to_search, found = 0;
    
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    
    scanf("%d", &roll_number_to_search);
    
    for (int i = 0; i < n; i++) {
        if (students[i].roll_number == roll_number_to_search) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student not found\n");
    }
    
    return 0;
}
