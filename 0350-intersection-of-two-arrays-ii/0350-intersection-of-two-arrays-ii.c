/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
{
    int n = 0, temp;
    int *new = (int *)malloc(sizeof(int) * nums1Size);

    qsort(nums1, nums1Size, sizeof(int), compare);
    qsort(nums2, nums2Size, sizeof(int), compare);
    
    int i = 0, j = 0;
    while (i < nums1Size && j < nums2Size)
    {
        if(nums1[i] == nums2[j])
        {
            new[n] = nums1[i];
            n++;
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
    }
    *returnSize = n;
    return new;
}