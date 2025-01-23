#include <stdio.h>

int main() {
    int a,b,c;
    float x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x = (a+b+c)/3;
    printf("Average: %.3f",x);
    return 0;
}