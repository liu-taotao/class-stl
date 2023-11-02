/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    /**
     * @brief 先遍历个数 再获取倒数第k个节点
     * 
     * @param head 
     * @param k 
     * @return int 
     */
    int kthToLast(ListNode* head, int k) {
        if (head == NULL) {
            return NULL;
        }
        int num = 0, len = 0;
        ListNode *ans = head;
        ListNode *res = head;
         
        while (ans != NULL) {
            len++;
            ans = ans->next;
        }

        len = len - k;
        for (int i = 0; i < len; i++) {
            res = res->next;
        }
        
        free(ans);
        return res->val;
    }
};