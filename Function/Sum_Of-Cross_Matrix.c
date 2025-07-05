#include <stdio.h>
int main() {
    int matrix[3][3], i, j, sum = 0;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        sum += matrix[i][i];
        sum += matrix[i][2 - i];
    }
    sum -= matrix[1][1];
    printf("Sum of cross matrix elements: %d\n", sum);
    return 0;
}
