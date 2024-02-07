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
        ListNode* new_head=nullptr;
        ListNode* current=head;
        if(head==nullptr||head->next==nullptr) return true;
        while(current!=nullptr){
            ListNode* temp = new ListNode(current->val);
            temp->next=new_head;
            new_head=temp;
            current=current->next;
        }
        while(head&&new_head){
            if(head->val!=new_head->val) return false;
            head=head->next;
            new_head=new_head->next;
        }
        return true;
    }
};