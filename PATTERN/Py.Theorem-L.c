#include <stdio.h>
int main() {
    int n = 10;
     for (int i = 0; i <= n; i++) {
         for(int j=1;j<=i;j++){
             if(i==j||j==1||i==n){
                 printf("* ");
             }
             else{
                 printf("  ");
             };       
        }
        printf("\n");
    }
    return 0;
}