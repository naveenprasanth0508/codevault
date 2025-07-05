#include <stdio.h>
int findTarget(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 4, 6, 8, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int result = findTarget(arr, size, target);
    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found\n", target);
    }
    return 0;
}
