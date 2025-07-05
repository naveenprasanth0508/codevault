#include <stdio.h>
int main() {
    int n = 5, k = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf("%c ", k++ + 97);
        }
        printf("\n");
    }
    return 0;
}
