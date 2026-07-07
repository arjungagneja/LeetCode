void moveZeroes(int* nums, int numsSize) 
{
    int i, j, temp, n = numsSize;
    for (i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            temp = nums[i];
            for (j = i; j < n - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            nums[n - 1] = temp;
            n--;
            i--;
        }
    }
}