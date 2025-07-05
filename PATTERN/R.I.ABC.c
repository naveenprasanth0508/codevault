#include <stdio.h>
int main() {
    int n = 5, k = 1;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < i; s++) {
            printf("   ");
        }
        for (int j = 1; j <= n - i; j++) {
            printf(" %c ", k++ + 64);
        }
        printf("\n");
    }
    return 0;
}
