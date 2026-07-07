int findNumbers(int* nums, int numsSize) 
{
    int even = 0;

    for (int i = 0; i < numsSize; i++)
    {
        int x = nums[i];
        int count = 0;

        while (x != 0)
        {
            x = x / 10;
            count = count + 1;
        }
        if (count % 2 == 0)
        {
            even = even + 1;
        }
    }
    return even;
}