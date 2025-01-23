#include <stdio.h>

int main() {
    int a,b,c;
    double x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x = (a+b+c)/3;
    printf("Average: %.2lf",x);
    return 0;
}