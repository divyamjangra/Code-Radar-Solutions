#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, length;

    scanf("%s", str);

    length = strlen(str);
    start = 0;
    end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            printf("No\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("Yes\n");
    return 0;
}
