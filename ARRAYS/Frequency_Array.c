#include<stdio.h>
int main(){
    int n=5,cnt=0;
    int arr[]={1,5,3,5,5,4};
    int search =5;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            cnt++;
        }
    }
   printf("%d",cnt);
}