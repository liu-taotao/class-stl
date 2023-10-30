class Solution {
public:
    /**
     * @brief 也就是直接 行 变 列
     * 
     * @param matrix 
     */
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> v(matrix.size());//指定大小
        for (int i = 0; i < matrix.size(); i++) {
            v[i].resize(matrix.size());//重新指定列数
            for (int j = 0; j < matrix.size(); j++) {
                v[i][j] = matrix[i][j];
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][matrix.size() - i - 1] = v[i][j];
            }
        }
    }
};