class Solution {
public:
    /**
     * @brief 确定长度相等后 排序
     * 
     * @param s1 
     * @param s2 
     * @return true 
     * @return false 
     */
    bool CheckPermutation(string s1, string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return s1 == s2;
    }
};