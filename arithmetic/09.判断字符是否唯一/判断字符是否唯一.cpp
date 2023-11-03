class Solution {
public:
    /**
     * @brief 类似于投票算法改的
     * 
     * @param astr 
     * @return true 
     * @return false 
     */
    bool isUnique(string astr) {
        int res[26] = {0};
        memset(res, 0, sizeof(res));
        for (int i = 0; i < astr.size(); i++) {
            int tem = astr[i] - 'a';
            if (res[tem]) {
                return false;
            } else {
                res[tem]++;
            }
        }
        return true;
    }
};