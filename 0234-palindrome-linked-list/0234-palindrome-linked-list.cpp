/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        ListNode* head2 = NULL;
        while (temp != NULL) {
            ListNode* newnode = new ListNode(temp->val);
            if (head2 == NULL) {
                head2 = newnode;
            } else {
                newnode->next = head2;
                head2 = newnode;
            }
            temp = temp->next;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = head2;
        while (temp1 != NULL) {
            if (temp1->val != temp2->val) {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};