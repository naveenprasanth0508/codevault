#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "silent", str2[] = "listen";
    if (strlen(str1) != strlen(str2)) {
        printf("It is not an Anagram.\n");
        return 0;
    }
    int freq[256] = {0};
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("It is not an Anagram.\n");
            return 0;
        }
    }
    printf("It is an Anagram.\n");
    return 0;
}
