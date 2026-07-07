bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) 
{
    for (int i = 0; i < matrixSize; i++)
    {
        int beg = 0; 
        int end = *matrixColSize - 1;

        while (beg <= end)
        {
            int mid = (beg + end) / 2;
            if (matrix[i][mid] == target)
            {
                return true;
            }
            else if (matrix[i][mid] > target)
            {
                end = mid - 1;
            }
            else 
            {
                beg = mid + 1;
            }
        }
    }  
    return false;  
}