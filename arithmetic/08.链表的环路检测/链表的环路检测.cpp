

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
     * @brief 重点是算 快慢指针相遇后 再申请一个指针 与慢指针跑 最后指向第一个相遇的节点
     * 
     * @param head 
     * @return ListNode* 
     */
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        if (head == NULL) {
            return NULL;
        }

        while (fast != NULL) {
            slow = slow->next;

            if (fast->next == NULL) {
                return NULL;
            }
            fast = fast->next->next;
            /* 如果快慢指针相遇 则申请一个指向头节点的指针 与慢指针相遇就是第一个交点*/
            if (fast == slow) {
                ListNode *res = head;

                while (res != slow) {
                    slow = slow->next;
                    res = res->next;
                }
                return res;
            }
        }
        return NULL;
    }
};