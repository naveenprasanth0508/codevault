#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a); 
}
int findKthLargest(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), compare);
    return nums[k - 1];
}
int main() {
    int nums[] = {21, 99, 5, 10, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k = 2; 
    int result = findKthLargest(nums, numsSize, k);
    printf("The %dth largest element is: %d\n", k, result);
    return 0;
}