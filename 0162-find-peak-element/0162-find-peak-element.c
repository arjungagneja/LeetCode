int findPeakElement(int* nums, int numsSize) 
{
    int max = nums[0];
    int index = 0;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            index = i;
        }   
    }
    return index;    
}