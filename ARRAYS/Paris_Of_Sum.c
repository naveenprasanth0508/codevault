#include <stdio.h>
void sumOfPairs(int arr[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
}
int main() {
    int arr[] = {1, 4, 6, 8, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    sumOfPairs(arr, size, target);
    return 0;
}
