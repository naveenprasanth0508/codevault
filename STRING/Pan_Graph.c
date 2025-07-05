#include <stdio.h>
#include <ctype.h>
int isPangram(const char str[]) {
    int alphabet[26] = {0}, count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            if (!alphabet[index]) {
                alphabet[index] = 1;
                count++;
                if (count == 26) return 1; 
            }
        }
    }
    return 0;
}
int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    if (isPangram(str))
        printf("It is a Pangram.\n");
    else
        printf("It is not a Pangram.\n");
    return 0;
}
