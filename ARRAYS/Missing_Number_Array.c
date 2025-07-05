#include <stdio.h>
int main() {
    int n = 5;
    int arr[] = {1, 2, 4, 5};
    int tot = 0, sum = 0;
    for (int i = 0; i <= n; i++) 
    {
        tot += i;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Missing Number is: %d", tot - sum);
    return 0;
}
