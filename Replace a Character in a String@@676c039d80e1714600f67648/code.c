#include <stdio.h>

int main() {
    char str[100];
    char to_replace, replace_with;

    fgets(str, sizeof(str), stdin); 
    scanf("%c", &to_replace);  
    getchar();                     
    scanf("%c", &replace_with);    
    

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_replace) {
            str[i] = replace_with;
        }
    }
    
    printf("%s\n", str);  

    return 0;
}
