#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Student students[n];
    struct Student top_scorer;
    top_scorer.marks = -1; 
    
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        
        if (students[i].marks > top_scorer.marks) {
            top_scorer = students[i];
        }
    }
    
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", top_scorer.roll_number, top_scorer.name, top_scorer.marks);
    
    return 0;
}
