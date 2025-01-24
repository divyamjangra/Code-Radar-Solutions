#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;


    scanf("%lf %lf %c", &num1, &num2, &operator);

    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%.2lf", result);
        } else {
            printf("Error");
        }
    } else {
        printf("Invalid operator!");
    }

    return 0;
}
