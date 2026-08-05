// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode *curr=head;
//         while(curr!=NULL && curr->next!=NULL){
//             if(curr->val == curr->next->val){
//                 curr->next=curr->next->next;
//             }
//             else{
//                 curr=curr->next;
//             }
//         }
//         return head;

//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->val==temp->next->val){
                temp->next=temp->next->next;
            }
            else temp=temp->next;
        }
        return head;
    }

};