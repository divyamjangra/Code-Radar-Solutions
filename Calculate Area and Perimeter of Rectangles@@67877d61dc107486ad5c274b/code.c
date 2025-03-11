#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    int N;
    
    scanf("%d", &N);
    
    struct Rectangle rectangles[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%f %f", &rectangles[i].length, &rectangles[i].breadth);
    }
    
    for (int i = 0; i < N; i++) {
        float area = rectangles[i].length * rectangles[i].breadth;
        float perimeter = 2 * (rectangles[i].length + rectangles[i].breadth);
        
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, area, perimeter);
    }

    return 0;
}
