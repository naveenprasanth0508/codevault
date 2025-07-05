#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str1[] = "silent", str2[] = "listen";
    if (strlen(str1) != strlen(str2)) {
        printf("It is not an Anagram.\n");
        return 0;
    }
    int freq[26] = {0}; 
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[tolower(str1[i]) - 'a']++;
        freq[tolower(str2[i]) - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("It is not an Anagram.\n");
            return 0;
        }
    }
    printf("It is an Anagram.\n");
    return 0;
}
