#include <stdio.h>
int main() {
    int a,s,d;
    scanf("%d %d %d",&a,&s,&d);
    if(a>s && s>d)
    printf("%d",a);
    else if(s>a && a>d)
    printf("%d",s);
    else
    printf("%d",d);
    return 0;
}