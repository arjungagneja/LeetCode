int majorityElement(int* nums, int numsSize) 
{
    int candidate = -1;
    int votes = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (votes == 0)
        {
            candidate = nums[i];
        }
        if (nums[i] == candidate)
        {
            votes = votes + 1;
        }
        else 
        {
            votes = votes - 1;
        }
    }    
    return candidate;
}