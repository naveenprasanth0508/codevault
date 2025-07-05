#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    if (n % 2 == 1) {
        int mid = arr[n / 2];
        printf("The middle element is: %d\n", mid);
    } else {
        int mid1 = arr[(n / 2) - 1];
        int mid2 = arr[n / 2];
        printf("The middle elements are: %d and %d\n", mid1, mid2);
    }
    return 0;
}