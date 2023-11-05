class Solution {
public:
    /**
     * @brief 实际就是统计个数的
     *
     * 
     * @param s 
     * @return true 
     * @return false 
     */
    bool canPermutePalindrome(string s) {
        int v[128], num = 0;
        memset(v, 0, sizeof(v));
        for (int i = 0; i < s.size(); i++) {
            v[s[i]]++;
        }
        for (int i = 0; i < 128; i++) {
            if (v[i] % 2 == 1) {
                num++;
            }
            if (num >= 2) {
                return false;
            }
        }
        return true;
    }
};