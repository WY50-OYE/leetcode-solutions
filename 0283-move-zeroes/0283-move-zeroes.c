void moveZeroes(int* nums, int numsSize) {
    int slow = 0; 
    
    for (int fast = 0; fast < numsSize; fast++) {
        if (nums[fast] != 0) {
            if (fast != slow) { 
                int temp = nums[fast];
                nums[fast] = nums[slow];
                nums[slow] = temp;
            }
            slow++; 
        }
    }
}