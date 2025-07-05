#include <stdio.h>
#include <string.h>
void removeDuplicates(char *str) {
    int seen[26] = {0};  
    int index = 0;  
    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[str[i] - 'a']) {  
            seen[str[i] - 'a'] = 1;
            str[index++] = str[i];
        }
    }
    str[index] = '\0';  
}
int main() {
    char str[] = "banana";
    removeDuplicates(str);
    printf("%s\n", str);
    return 0;
}
