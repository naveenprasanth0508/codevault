#include <stdio.h>
int main() {
    int arr[] = {1, 2, 33, 5, 3, 43, 23, 65, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
