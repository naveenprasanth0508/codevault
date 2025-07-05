#include <stdio.h>
#include <limits.h> 
int main() {
    int arr[] = {1, 2, 3, 4, 50, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("First largest element: %d\n", first);
        printf("Second largest element: %d\n", second);
    }
    return 0;
}