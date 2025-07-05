#include <stdio.h>
int main() {
    int n=5;
    for (int i = 0; i <= n; i++) {

        for (int j = 1; j < 1 * i + 1; j++) {
            printf(" %d ",i);
        }
        printf("\n");
    }
    return 0;
}

