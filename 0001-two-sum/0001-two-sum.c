/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
    #include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    if (numsSize < 2) {
        *returnSize = 0;
        return NULL;
    }

    int* result = malloc(sizeof(int) * 2);
    
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result; 
            }
        }
    }
    *returnSize = 0;
    return NULL; 
}