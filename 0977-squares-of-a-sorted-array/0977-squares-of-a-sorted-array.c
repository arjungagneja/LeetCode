/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
 
int* sortedSquares(int* nums, int numsSize, int* returnSize) 
{
    int *new = (int *)malloc(sizeof(int) * numsSize);

    for(int i = 0; i < numsSize; i++)
    {
        new[i] = (nums[i] * nums[i]);
    }
    qsort(new, numsSize, sizeof(int), compare);
    
    *returnSize = numsSize;
    return new;
}