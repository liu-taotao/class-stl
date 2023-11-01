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
     * @brief 链表移除 重复的元素 也就是没有缓冲区 直接使用两个循环原地换 一个节点遍历往后 删除和这个节点相同的节点
     * 
     * @param head 
     * @return ListNode* 
     */
    ListNode* removeDuplicateNodes(ListNode* head) {
        ListNode *ans = head;
        while (ans != NULL) {
            ListNode *res = ans;
            while (res->next != NULL) {
                if (ans->val == res->next->val) {
                    res->next = res->next->next;
                } else {
                    res = res->next;
                }
            }
            ans = ans->next;
        }
        return head;
    }
};