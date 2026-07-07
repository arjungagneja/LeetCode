/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *returned = (int *)malloc(2 * sizeof(int));
    int i, j;

    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                returned[0] = i;
                returned[1] = j;
                *returnSize = 2;
                return returned;
            }
        }
    }
    *returnSize = 0;
    free(returned);
    return NULL;
}