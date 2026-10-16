class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        vector<int> rmin(m, INT_MAX);
        vector<int> cmax(n, INT_MIN);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rmin[i] = min(matrix[i][j], rmin[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cmax[i] = max(cmax[i], matrix[j][i]);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == rmin[i] && matrix[i][j] == cmax[j]) {
                    ans.push_back(matrix[i][j]);
                } 
            }
        }
        return ans;
    }
};