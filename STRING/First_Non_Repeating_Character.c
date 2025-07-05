#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256
char firstNonRepeatingChar(char *str) {
    int count[MAX_CHAR] = {0}; 
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    return '\0';
}
int main() {
    char str[] = "swiss";
    char result = firstNonRepeatingChar(str);
    if (result) {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }
    return 0;
}
