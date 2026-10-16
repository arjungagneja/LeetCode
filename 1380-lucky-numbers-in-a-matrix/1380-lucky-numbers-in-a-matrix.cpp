class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int minr = matrix[i][j];
                int maxc = matrix[i][j];
                for (int k = 0; k < n; k++) {
                    minr = min(matrix[i][k], minr);
                }
                for (int k = 0; k < m; k++) {
                    maxc = max(matrix[k][j], maxc);
                }
                if (matrix[i][j] == minr && matrix[i][j] == maxc) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};