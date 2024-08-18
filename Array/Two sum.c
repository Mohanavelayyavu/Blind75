int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *a = (int*)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                a[0] = i;
                a[1] = j;
                *returnSize = 2;
                return a;
            }
        }
    }
    
    *returnSize = 0;
    return NULL;
}
