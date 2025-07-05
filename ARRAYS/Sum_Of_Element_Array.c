#include <stdio.h>
int main() {
    int array[] = {1, 23, 4, 5, 634, 342, 23};
    int n = sizeof(array) / sizeof(array[0]); 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}