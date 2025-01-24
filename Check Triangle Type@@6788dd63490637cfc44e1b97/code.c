#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the three sides of the triangle separated by spaces: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral Triangle");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles Triangle");
        } else {
            printf("Scalene Triangle");
        }
    } else {
        printf("Invalid triangle: The sides do not satisfy the triangle inequality.");
    }

    return 0;
}
