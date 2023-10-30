class Solution {
public:
    /**
     * @brief 从后往前搜索
     * 
     * @param matrix 
     * @param target 
     * @return true 
     * @return false 
     */
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int h = matrix.size(), l = matrix[0].size();

        int i = h - 1, j = 0;

        while (i >= 0 && j < l) {
            if (matrix[i][j] == target) {
                return true;
            }
            if (matrix[i][j] < target) {
                j++;
            } else {
                i--;
            }
        }
        return false;
    }
};