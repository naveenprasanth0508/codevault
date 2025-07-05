#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); 
    int low = 0;
    int high = strlen(str) - 1;
    int isPalindrome = 1; 
    while (low < high) {
        if (str[low] != str[high]) {
            isPalindrome = 0; 
            break;
        }
        low++;
        high--;
    }
    if (isPalindrome)
        printf("%s is a Palindrome\n", str);
    else
        printf("%s is Not a Palindrome\n", str);
    return 0;
}
