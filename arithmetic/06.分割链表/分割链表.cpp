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
     * @brief 相当于 把小于 x 的全部用以链表串起来 大于 x 的全部用一个链表串起来 最后再把这两个链表串起来。
     * 
     * @param head 
     * @param x 
     * @return ListNode* 
     */
    ListNode* partition(ListNode* head, int x) {
        ListNode *smallhead = (ListNode *)malloc(sizeof(struct ListNode));
        ListNode *small = smallhead;
        ListNode *lasthead = (ListNode *)malloc(sizeof(struct ListNode));
        ListNode *last = lasthead;

        while (head != NULL) {
            if (head->val < x) {
                small->next = head;
                small = small->next;
            } else {
                last->next = head;
                last = last->next;
            }
            head = head->next;
        }
        last->next = NULL;
        small->next = lasthead->next;
        return smallhead->next;
    }
};