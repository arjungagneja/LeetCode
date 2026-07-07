/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    if (matrixSize == 0 || *matrixColSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    int left = 0, right = *matrixColSize - 1, bottom = matrixSize - 1, top = 0, k = 0;
    int* answer = (int *)malloc(sizeof(int) * matrixSize * *matrixColSize);
    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++) {
            answer[k] = matrix[top][i];
            k++;
        }
        top++;
        if (top > bottom) break;
        for (int i = top; i <= bottom; i++) {
            answer[k] = matrix[i][right];
            k++;
        }
        right--;
        if (left > right) break;
        for (int i = right; i >= left; i--) {
            answer[k] = matrix[bottom][i];
            k++;
        }
        bottom--;
        if (top > bottom) break;
        for (int i = bottom; i >= top; i--) {
            answer[k] = matrix[i][left];
            k++;
        }
        left++;
        if (left > right) break;
    }
    *returnSize = k;
    return answer;
}