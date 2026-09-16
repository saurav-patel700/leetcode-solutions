class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            int g = gcd(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(g);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next;
        }
        return head;
    }
};