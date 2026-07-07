int missingNumber(int* nums, int numsSize) 
{   
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < numsSize; i++)
    {
        sum1 = sum1 + nums[i];
    }
    for (int i = 0; i <= numsSize; i++)
    {
        sum2 = sum2 + i;
    }
    
    return (sum2 - sum1);
}