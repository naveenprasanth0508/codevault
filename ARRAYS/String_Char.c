#include <stdio.h>
int main() {
    char arr[] = {'H','E','L','L','O'};
    char str[] = "HELLO";
    int n = sizeof(arr) / sizeof(arr[0]);
    int n1 = sizeof(str) / sizeof(str[0]);
    printf("SizeOf Char Array: %d\n",n);
    printf("sizeOf Strings: %d\n",n1);
}