#include <stdio.h>
int main() {
    int n = 10;
    for (int i = 1; i <= n; i++) {                                            
        for (int j = 1; j <=n; j++) {     
            if(j==n || n==(i+j)-1 || i==n){
            printf("* ");      
            }
            else{
                printf("  ");
            }
        }                                                              
        printf("\n");
    }
    return 0;
}