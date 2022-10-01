int majorityElement(int* nums, int numsSize){
     int count = 0, majority = 0;
    for(int i=0; i<numsSize; i++){
        if (count == 0)
            majority = nums[i];
        if (nums[i] == majority)
            count++;
        else
            count--;
    }
    return majority;
}