int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    if (n == 0)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        nums1[i + m] = nums2[i];
    }
    qsort(nums1, m + n, sizeof(int), compare);
}