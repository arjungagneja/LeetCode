/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) 
{
    int *newarr = (int *)malloc(numsSize * sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++)
    {
        newarr[i] = nums[i];
        newarr[i + numsSize] = nums[i];
    }
    *returnSize = 2 * numsSize;
    return newarr;
    free(newarr);
}